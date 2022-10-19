#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StaticAccessorAttribute {
        namespace {
            inline app::StaticAccessorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::StaticAccessorAttribute__Class** type_info = &type_info_ref;
        inline app::StaticAccessorAttribute__Class* get_class() {
            return il2cpp::get_class<app::StaticAccessorAttribute__Class>(type_info, "UnityEngine.Bindings", "StaticAccessorAttribute");
        }
        inline app::StaticAccessorAttribute* create() {
            return il2cpp::create_object<app::StaticAccessorAttribute>(get_class());
        }
    } // namespace StaticAccessorAttribute
} // namespace app::classes::types
