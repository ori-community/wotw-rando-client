#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame__Class.h>
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame.h>
#include <Modloader/app/structs/PostLateUpdate_InputEndFrame__Boxed.h>

namespace app::classes::types {
    namespace PostLateUpdate_InputEndFrame {
        namespace {
            inline app::PostLateUpdate_InputEndFrame__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_InputEndFrame__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_InputEndFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_InputEndFrame__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "InputEndFrame");
        }
        inline app::PostLateUpdate_InputEndFrame* create() {
            return il2cpp::create_object<app::PostLateUpdate_InputEndFrame>(get_class());
        }
        inline app::PostLateUpdate_InputEndFrame__Boxed* box(app::PostLateUpdate_InputEndFrame value) {
            return il2cpp::box_value<app::PostLateUpdate_InputEndFrame__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_InputEndFrame
} // namespace app::classes::types
