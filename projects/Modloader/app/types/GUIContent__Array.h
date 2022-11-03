#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIContent__Array {
        namespace {
            inline app::GUIContent__Array__Class* type_info_ref = nullptr;
        }
        inline app::GUIContent__Array__Class** type_info = &type_info_ref;
        inline app::GUIContent__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIContent__Array__Class>(type_info, "UnityEngine", "GUIContent[]");
        }
        inline app::GUIContent__Array* create() {
            return il2cpp::create_object<app::GUIContent__Array>(get_class());
        }
    } // namespace GUIContent__Array
} // namespace app::classes::types
