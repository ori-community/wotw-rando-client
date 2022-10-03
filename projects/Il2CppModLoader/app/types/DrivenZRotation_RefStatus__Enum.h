#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrivenZRotation_RefStatus__Enum {
        namespace {
            app::DrivenZRotation_RefStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::DrivenZRotation_RefStatus__Enum__Class** type_info = &type_info_ref;
        inline app::DrivenZRotation_RefStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DrivenZRotation_RefStatus__Enum__Class>(type_info, "Moon", "DrivenZRotation", "RefStatus");
        }
        inline app::DrivenZRotation_RefStatus__Enum* create() {
            return il2cpp::create_object<app::DrivenZRotation_RefStatus__Enum>(get_class());
        }
    } // namespace DrivenZRotation_RefStatus__Enum
} // namespace app::classes::types
