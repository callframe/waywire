#include <cstdio>
#include <cstdlib>
#include <string_view>
#include <format>
#include <filesystem>

static constexpr std::string_view USAGE =
   "usage: {} [header | code] [protocol_file] [output_file]\n"
   "Produces C++ Header/Code from a XML protocol description file.\n"
;

int main(int argc, char const* argv[]) {
    if(argc < 3) {
        auto stem = std::filesystem::path(argv[0]).stem().string();
        auto usage = std::vformat(USAGE, std::make_format_args(stem));
        std::fprintf(stderr, usage.c_str());
        return EXIT_FAILURE;
    }
}
