#pragma once
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame.h>
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_InputEndFrame {
        inline app::PostLateUpdate_InputEndFrame__Class** type_info() {
            static app::PostLateUpdate_InputEndFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_InputEndFrame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_InputEndFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_InputEndFrame__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "InputEndFrame");
        }
        inline app::PostLateUpdate_InputEndFrame* create() {
            return il2cpp::create_object<app::PostLateUpdate_InputEndFrame>(get_class());
        }
        inline app::PostLateUpdate_InputEndFrame__Boxed* box(app::PostLateUpdate_InputEndFrame value) {
            return il2cpp::box_value<app::PostLateUpdate_InputEndFrame__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_InputEndFrame
} // namespace app::classes::types
