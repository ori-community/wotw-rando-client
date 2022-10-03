#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityString {
        namespace {
            app::UnityString__Class* type_info_ref = nullptr;
        }
        app::UnityString__Class** type_info = &type_info_ref;
        inline app::UnityString__Class* get_class() {
            return il2cpp::get_class<app::UnityString__Class>(type_info, "UnityEngine", "UnityString");
        }
        inline app::UnityString* create() {
            return il2cpp::create_object<app::UnityString>(get_class());
        }
    } // namespace UnityString
} // namespace app::classes::types
