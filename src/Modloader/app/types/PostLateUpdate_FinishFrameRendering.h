#pragma once
#include <Modloader/app/structs/PostLateUpdate_FinishFrameRendering.h>
#include <Modloader/app/structs/PostLateUpdate_FinishFrameRendering__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_FinishFrameRendering__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_FinishFrameRendering {
        inline app::PostLateUpdate_FinishFrameRendering__Class** type_info() {
            static app::PostLateUpdate_FinishFrameRendering__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_FinishFrameRendering__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_FinishFrameRendering__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_FinishFrameRendering__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "FinishFrameRendering");
        }
        inline app::PostLateUpdate_FinishFrameRendering* create() {
            return il2cpp::create_object<app::PostLateUpdate_FinishFrameRendering>(get_class());
        }
        inline app::PostLateUpdate_FinishFrameRendering__Boxed* box(app::PostLateUpdate_FinishFrameRendering value) {
            return il2cpp::box_value<app::PostLateUpdate_FinishFrameRendering__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_FinishFrameRendering
} // namespace app::classes::types
