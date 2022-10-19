#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotNullAttribute {
        namespace {
            inline app::NotNullAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NotNullAttribute__Class** type_info = &type_info_ref;
        inline app::NotNullAttribute__Class* get_class() {
            return il2cpp::get_class<app::NotNullAttribute__Class>(type_info, "UnityEngine.Bindings", "NotNullAttribute");
        }
        inline app::NotNullAttribute* create() {
            return il2cpp::create_object<app::NotNullAttribute>(get_class());
        }
    } // namespace NotNullAttribute
} // namespace app::classes::types
