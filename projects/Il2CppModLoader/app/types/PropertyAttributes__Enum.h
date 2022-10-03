#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyAttributes__Enum {
        namespace {
            app::PropertyAttributes__Enum__Class* type_info_ref = nullptr;
        }
        app::PropertyAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::PropertyAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::PropertyAttributes__Enum__Class>(type_info, "System.Reflection", "PropertyAttributes");
        }
        inline app::PropertyAttributes__Enum* create() {
            return il2cpp::create_object<app::PropertyAttributes__Enum>(get_class());
        }
    } // namespace PropertyAttributes__Enum
} // namespace app::classes::types
