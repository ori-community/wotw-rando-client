#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateCaptureScreenshot.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCaptureScreenshot__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCaptureScreenshot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateCaptureScreenshot {
        inline app::PostLateUpdate_UpdateCaptureScreenshot__Class** type_info() {
            static app::PostLateUpdate_UpdateCaptureScreenshot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateCaptureScreenshot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateCaptureScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateCaptureScreenshot__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateCaptureScreenshot");
        }
        inline app::PostLateUpdate_UpdateCaptureScreenshot* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateCaptureScreenshot>(get_class());
        }
        inline app::PostLateUpdate_UpdateCaptureScreenshot__Boxed* box(app::PostLateUpdate_UpdateCaptureScreenshot value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateCaptureScreenshot__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateCaptureScreenshot
} // namespace app::classes::types
