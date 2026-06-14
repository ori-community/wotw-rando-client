#pragma once
#include <Modloader/app/structs/EarlyUpdate_UpdateCanvasRectTransform.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateCanvasRectTransform__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateCanvasRectTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateCanvasRectTransform {
        inline app::EarlyUpdate_UpdateCanvasRectTransform__Class** type_info() {
            static app::EarlyUpdate_UpdateCanvasRectTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_UpdateCanvasRectTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_UpdateCanvasRectTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateCanvasRectTransform__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateCanvasRectTransform");
        }
        inline app::EarlyUpdate_UpdateCanvasRectTransform* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateCanvasRectTransform>(get_class());
        }
        inline app::EarlyUpdate_UpdateCanvasRectTransform__Boxed* box(app::EarlyUpdate_UpdateCanvasRectTransform value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateCanvasRectTransform__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateCanvasRectTransform
} // namespace app::classes::types
