#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticAccessorType__Enum {
        namespace {
            app::StaticAccessorType__Enum__Class* type_info_ref = nullptr;
        }
        app::StaticAccessorType__Enum__Class** type_info = &type_info_ref;
        inline app::StaticAccessorType__Enum__Class* get_class() {
            return il2cpp::get_class<app::StaticAccessorType__Enum__Class>(type_info, "UnityEngine.Bindings", "StaticAccessorType");
        }
        inline app::StaticAccessorType__Enum* create() {
            return il2cpp::create_object<app::StaticAccessorType__Enum>(get_class());
        }
    } // namespace StaticAccessorType__Enum
} // namespace app::classes::types
