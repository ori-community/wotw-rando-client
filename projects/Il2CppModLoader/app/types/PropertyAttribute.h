#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyAttribute {
        namespace {
            inline app::PropertyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::PropertyAttribute__Class** type_info = &type_info_ref;
        inline app::PropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::PropertyAttribute__Class>(type_info, "UnityEngine", "PropertyAttribute");
        }
        inline app::PropertyAttribute* create() {
            return il2cpp::create_object<app::PropertyAttribute>(get_class());
        }
    } // namespace PropertyAttribute
} // namespace app::classes::types
