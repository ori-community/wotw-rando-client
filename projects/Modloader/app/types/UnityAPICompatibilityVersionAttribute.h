#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityAPICompatibilityVersionAttribute {
        namespace {
            inline app::UnityAPICompatibilityVersionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UnityAPICompatibilityVersionAttribute__Class** type_info = &type_info_ref;
        inline app::UnityAPICompatibilityVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnityAPICompatibilityVersionAttribute__Class>(type_info, "UnityEngine", "UnityAPICompatibilityVersionAttribute");
        }
        inline app::UnityAPICompatibilityVersionAttribute* create() {
            return il2cpp::create_object<app::UnityAPICompatibilityVersionAttribute>(get_class());
        }
    } // namespace UnityAPICompatibilityVersionAttribute
} // namespace app::classes::types
