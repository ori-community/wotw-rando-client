#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Array__Class.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Array.h>

namespace app::classes::types {
    namespace GUILayoutUtility_LayoutCache__Array {
        namespace {
            inline app::GUILayoutUtility_LayoutCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::GUILayoutUtility_LayoutCache__Array__Class** type_info = &type_info_ref;
        inline app::GUILayoutUtility_LayoutCache__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility_LayoutCache__Array__Class>(type_info, "UnityEngine", "GUILayoutUtility+LayoutCache[]");
        }
        inline app::GUILayoutUtility_LayoutCache__Array* create() {
            return il2cpp::create_object<app::GUILayoutUtility_LayoutCache__Array>(get_class());
        }
    } // namespace GUILayoutUtility_LayoutCache__Array
} // namespace app::classes::types
