#include "Il2CppModLoader/windows_api/memory.h"
#include "Il2CppModLoader/windows_api/console.h"
#include "Il2CppModLoader/common.h"
#include "Common/ext.h"

#include <Il2CppModLoader/windows_api/windows.h>

using namespace modloader::win;

namespace modloader::win::memory {
    uint64_t game_assembly_address = 0;
    uint64_t unity_player_address = 0;

    namespace {
        uint64_t get_assembly_address(const std::string& assembly_name, uint64_t& cache) {
            if (!cache) {
                auto handle = GetModuleHandleA(assembly_name.c_str());
                if (handle == nullptr) {
                    trace(MessageType::Error, 1, "initialize", format("Failed to get handle of %s", assembly_name.c_str()));
                    return 0;
                }

                cache = reinterpret_cast<uint64_t>(handle);
                console::console_send(format("%s: %#018x", assembly_name.c_str(), cache));
            }

            return cache;
        }
    }

    uint64_t get_game_assembly_address() {
        return get_assembly_address("GameAssembly.dll", game_assembly_address);
    }

    uint64_t get_unity_player_address() {
        return get_assembly_address("UnityPlayer.dll", unity_player_address);
    }

    uint64_t resolve_rva(uint64_t rva) {
        return get_game_assembly_address() + rva;
    }

    uint64_t unresolve_rva(uint64_t ptr) {
        return ptr - get_game_assembly_address();
    }

    uint64_t resolve_unity_player_rva(uint64_t rva) {
        return get_unity_player_address() + rva;
    }
}