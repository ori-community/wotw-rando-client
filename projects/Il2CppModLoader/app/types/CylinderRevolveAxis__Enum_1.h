#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CylinderRevolveAxis__Enum_1 {
        namespace {
            app::CylinderRevolveAxis__Enum_1__Class* type_info_ref = nullptr;
        }
        app::CylinderRevolveAxis__Enum_1__Class** type_info = &type_info_ref;
        inline app::CylinderRevolveAxis__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::CylinderRevolveAxis__Enum_1__Class>(type_info, "Moon.UI", "CylinderRevolveAxis");
        }
        inline app::CylinderRevolveAxis__Enum_1* create() {
            return il2cpp::create_object<app::CylinderRevolveAxis__Enum_1>(get_class());
        }
    } // namespace CylinderRevolveAxis__Enum_1
} // namespace app::classes::types
