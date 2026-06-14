#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateCanvasRectTransform.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCanvasRectTransform__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCanvasRectTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateCanvasRectTransform {
        inline app::PostLateUpdate_UpdateCanvasRectTransform__Class** type_info() {
            static app::PostLateUpdate_UpdateCanvasRectTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateCanvasRectTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateCanvasRectTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateCanvasRectTransform__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateCanvasRectTransform");
        }
        inline app::PostLateUpdate_UpdateCanvasRectTransform* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateCanvasRectTransform>(get_class());
        }
        inline app::PostLateUpdate_UpdateCanvasRectTransform__Boxed* box(app::PostLateUpdate_UpdateCanvasRectTransform value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateCanvasRectTransform__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateCanvasRectTransform
} // namespace app::classes::types
