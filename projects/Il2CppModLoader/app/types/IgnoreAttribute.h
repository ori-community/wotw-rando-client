#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnoreAttribute {
        namespace {
            inline app::IgnoreAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::IgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::IgnoreAttribute__Class>(type_info, "UnityEngine.Bindings", "IgnoreAttribute");
        }
        inline app::IgnoreAttribute* create() {
            return il2cpp::create_object<app::IgnoreAttribute>(get_class());
        }
    } // namespace IgnoreAttribute
} // namespace app::classes::types
