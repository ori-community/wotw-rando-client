#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectTransform__Array {
        namespace {
            inline app::RectTransform__Array__Class* type_info_ref = nullptr;
        }
        inline app::RectTransform__Array__Class** type_info = &type_info_ref;
        inline app::RectTransform__Array__Class* get_class() {
            return il2cpp::get_class<app::RectTransform__Array__Class>(type_info, "UnityEngine", "RectTransform[]");
        }
        inline app::RectTransform__Array* create() {
            return il2cpp::create_object<app::RectTransform__Array>(get_class());
        }
    } // namespace RectTransform__Array
} // namespace app::classes::types
