#pragma once
#include <Modloader/app/structs/PostLateUpdate_PlayerEmitCanvasGeometry.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerEmitCanvasGeometry__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PlayerEmitCanvasGeometry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerEmitCanvasGeometry {
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Class** type_info() {
            static app::PostLateUpdate_PlayerEmitCanvasGeometry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PlayerEmitCanvasGeometry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerEmitCanvasGeometry__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerEmitCanvasGeometry");
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerEmitCanvasGeometry>(get_class());
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Boxed* box(app::PostLateUpdate_PlayerEmitCanvasGeometry value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerEmitCanvasGeometry__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerEmitCanvasGeometry
} // namespace app::classes::types
