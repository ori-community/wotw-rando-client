#pragma once

#include <Il2CppModLoader/macros.h>
#include <cstdint>

namespace modloader::win::memory {
    IL2CPP_MODLOADER_DLLEXPORT uint64_t get_game_assembly_address();
    IL2CPP_MODLOADER_DLLEXPORT uint64_t resolve_rva(uint64_t rva);
    IL2CPP_MODLOADER_DLLEXPORT uint64_t unresolve_rva(uint64_t ptr);
}