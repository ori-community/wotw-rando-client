#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_PlayerEmitCanvasGeometry {
        namespace {
            inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PlayerEmitCanvasGeometry__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PlayerEmitCanvasGeometry");
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry* create() {
            return il2cpp::create_object<app::PostLateUpdate_PlayerEmitCanvasGeometry>(get_class());
        }
        inline app::PostLateUpdate_PlayerEmitCanvasGeometry__Boxed* box(app::PostLateUpdate_PlayerEmitCanvasGeometry value) {
            return il2cpp::box_value<app::PostLateUpdate_PlayerEmitCanvasGeometry__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PlayerEmitCanvasGeometry
} // namespace app::classes::types
