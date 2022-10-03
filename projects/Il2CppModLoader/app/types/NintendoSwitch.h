#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoSwitch__Class** type_info;
        inline app::NintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitch__Class>(type_info, "", "NintendoSwitch");
        }
        inline app::NintendoSwitch* create() {
            return il2cpp::create_object<app::NintendoSwitch>(get_class());
        }
    } // namespace NintendoSwitch
} // namespace app::classes::types
