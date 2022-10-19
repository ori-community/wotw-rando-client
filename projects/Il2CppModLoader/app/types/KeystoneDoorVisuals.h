#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystoneDoorVisuals {
        inline app::KeystoneDoorVisuals__Class** type_info = (app::KeystoneDoorVisuals__Class**)(modloader::win::memory::resolve_rva(0x0470E298));
        inline app::KeystoneDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorVisuals__Class>(type_info, "", "KeystoneDoorVisuals");
        }
        inline app::KeystoneDoorVisuals* create() {
            return il2cpp::create_object<app::KeystoneDoorVisuals>(get_class());
        }
    } // namespace KeystoneDoorVisuals
} // namespace app::classes::types
