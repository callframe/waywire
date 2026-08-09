#pragma once

#include <cstdint>

namespace waywire
{

enum Display_Error : std::uint8_t
{

};

struct Display
{
  std::uint32_t fd;
};

}  // namespace waywire
