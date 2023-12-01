#include "Modloader/windows_api/memory.h"
#include "Modloader/modloader.h"
#include "Modloader/windows_api/console.h"

#include <Modloader/windows_api/windows.h>
#include <format>

using namespace modloader::win;

namespace modloader::win::memory {
    uint64_t game_assembly_address = 0;
    uint64_t unity_player_address = 0;

    namespace {
        uint64_t get_assembly_address(const std::string& assembly_name, uint64_t& cache) {
            if (!cache) {
                auto handle = GetModuleHandleA(assembly_name.c_str());
                if (handle == nullptr) {
                    error("initialize", std::format("Failed to get handle of {}", assembly_name));
                    return 0;
                }

                cache = reinterpret_cast<uint64_t>(handle);
                console::console_send(std::format("{}: {:#18x}", assembly_name, cache));
            }

            return cache;
        }
    } // namespace

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
} // namespace modloader::win::memory
