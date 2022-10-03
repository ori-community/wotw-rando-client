#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeTargets__Enum {
        namespace {
            app::AttributeTargets__Enum__Class* type_info_ref = nullptr;
        }
        app::AttributeTargets__Enum__Class** type_info = &type_info_ref;
        inline app::AttributeTargets__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttributeTargets__Enum__Class>(type_info, "System", "AttributeTargets");
        }
        inline app::AttributeTargets__Enum* create() {
            return il2cpp::create_object<app::AttributeTargets__Enum>(get_class());
        }
    } // namespace AttributeTargets__Enum
} // namespace app::classes::types
