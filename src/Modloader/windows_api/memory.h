#pragma once

#include <Modloader/macros.h>
#include <cstdint>
#include <functional>

namespace modloader::win::memory {
    enum class Instruction: uint8_t {
        NOP = 0x90,
    };

    IL2CPP_MODLOADER_DLLEXPORT uint64_t get_game_assembly_address();
    IL2CPP_MODLOADER_DLLEXPORT uint64_t get_unity_player_address();
    IL2CPP_MODLOADER_DLLEXPORT uint64_t resolve_rva(uint64_t rva);
    IL2CPP_MODLOADER_DLLEXPORT uint64_t unresolve_rva(uint64_t ptr);
    IL2CPP_MODLOADER_DLLEXPORT uint64_t resolve_unity_player_rva(uint64_t rva);
    IL2CPP_MODLOADER_DLLEXPORT void modify_memory(uint64_t address, uint64_t length, const std::function<void(uint8_t* memory)>& fn);
}
