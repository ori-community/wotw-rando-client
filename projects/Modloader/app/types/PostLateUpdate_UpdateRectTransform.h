#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateRectTransform.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateRectTransform__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateRectTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateRectTransform {
        inline app::PostLateUpdate_UpdateRectTransform__Class** type_info() {
            static app::PostLateUpdate_UpdateRectTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateRectTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateRectTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateRectTransform__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateRectTransform");
        }
        inline app::PostLateUpdate_UpdateRectTransform* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateRectTransform>(get_class());
        }
        inline app::PostLateUpdate_UpdateRectTransform__Boxed* box(app::PostLateUpdate_UpdateRectTransform value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateRectTransform__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateRectTransform
} // namespace app::classes::types
