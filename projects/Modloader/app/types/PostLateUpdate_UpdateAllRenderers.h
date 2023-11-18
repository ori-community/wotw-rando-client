#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateAllRenderers.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAllRenderers__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAllRenderers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateAllRenderers {
        inline app::PostLateUpdate_UpdateAllRenderers__Class** type_info() {
            static app::PostLateUpdate_UpdateAllRenderers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateAllRenderers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateAllRenderers__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateAllRenderers__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateAllRenderers");
        }
        inline app::PostLateUpdate_UpdateAllRenderers* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateAllRenderers>(get_class());
        }
        inline app::PostLateUpdate_UpdateAllRenderers__Boxed* box(app::PostLateUpdate_UpdateAllRenderers value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateAllRenderers__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateAllRenderers
} // namespace app::classes::types
