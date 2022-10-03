#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidatorState__Enum {
        namespace {
            app::ValidatorState__Enum__Class* type_info_ref = nullptr;
        }
        app::ValidatorState__Enum__Class** type_info = &type_info_ref;
        inline app::ValidatorState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValidatorState__Enum__Class>(type_info, "System.Xml.Schema", "ValidatorState");
        }
        inline app::ValidatorState__Enum* create() {
            return il2cpp::create_object<app::ValidatorState__Enum>(get_class());
        }
    } // namespace ValidatorState__Enum
} // namespace app::classes::types
