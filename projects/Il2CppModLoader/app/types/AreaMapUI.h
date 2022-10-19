#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapUI {
        inline app::AreaMapUI__Class** type_info = (app::AreaMapUI__Class**)(modloader::win::memory::resolve_rva(0x04744F58));
        inline app::AreaMapUI__Class* get_class() {
            return il2cpp::get_class<app::AreaMapUI__Class>(type_info, "", "AreaMapUI");
        }
        inline app::AreaMapUI* create() {
            return il2cpp::create_object<app::AreaMapUI>(get_class());
        }
    } // namespace AreaMapUI
} // namespace app::classes::types
