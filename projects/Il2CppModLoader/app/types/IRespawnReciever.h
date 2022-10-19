#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRespawnReciever {
        inline app::IRespawnReciever__Class** type_info = (app::IRespawnReciever__Class**)(modloader::win::memory::resolve_rva(0x04796AC0));
        inline app::IRespawnReciever__Class* get_class() {
            return il2cpp::get_class<app::IRespawnReciever__Class>(type_info, "", "IRespawnReciever");
        }
    } // namespace IRespawnReciever
} // namespace app::classes::types
