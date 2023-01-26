#pragma once
#include <Modloader/app/structs/UnityAPICompatibilityVersionAttribute.h>
#include <Modloader/app/structs/UnityAPICompatibilityVersionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityAPICompatibilityVersionAttribute {
        inline app::UnityAPICompatibilityVersionAttribute__Class** type_info() {
            static app::UnityAPICompatibilityVersionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityAPICompatibilityVersionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityAPICompatibilityVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnityAPICompatibilityVersionAttribute__Class>(type_info(), "UnityEngine", "UnityAPICompatibilityVersionAttribute");
        }
        inline app::UnityAPICompatibilityVersionAttribute* create() {
            return il2cpp::create_object<app::UnityAPICompatibilityVersionAttribute>(get_class());
        }
    } // namespace UnityAPICompatibilityVersionAttribute
} // namespace app::classes::types
