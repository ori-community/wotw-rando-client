#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWeapon {
        namespace {
            app::IWeapon__Class* type_info_ref = nullptr;
        }
        app::IWeapon__Class** type_info = &type_info_ref;
        inline app::IWeapon__Class* get_class() {
            return il2cpp::get_class<app::IWeapon__Class>(type_info, "Moon", "IWeapon");
        }
        inline app::IWeapon* create() {
            return il2cpp::create_object<app::IWeapon>(get_class());
        }
    } // namespace IWeapon
} // namespace app::classes::types
