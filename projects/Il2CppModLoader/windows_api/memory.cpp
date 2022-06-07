#include "Il2CppModLoader/windows_api/memory.h"
#include "Il2CppModLoader/windows_api/console.h"
#include "Il2CppModLoader/common.h"
#include "Common/ext.h"

#include <Il2CppModLoader/windows_api/windows.h>

using namespace modloader::win;

namespace modloader::win::memory {
    uint64_t game_assembly_address = 0;

    uint64_t get_game_assembly_address() {
        if (!game_assembly_address) {
            auto handle = GetModuleHandleA("GameAssembly.dll");
            if (handle == nullptr) {
                trace(MessageType::Error, 1, "initialize", "Failed to get handle of GameAssembly.dll");
                return 0;
            }

            game_assembly_address = reinterpret_cast<uint64_t>(handle);
            console::console_send(format("game_assembly_address: %#018x", game_assembly_address));
        }

        return game_assembly_address;
    }

    uint64_t resolve_rva(uint64_t rva) {
        return get_game_assembly_address() + rva;
    }

    uint64_t unresolve_rva(uint64_t ptr) {
        return ptr - get_game_assembly_address();
    }
}