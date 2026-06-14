#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateResolution.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateResolution__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateResolution__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateResolution {
        inline app::PostLateUpdate_UpdateResolution__Class** type_info() {
            static app::PostLateUpdate_UpdateResolution__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateResolution__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateResolution__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateResolution__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateResolution");
        }
        inline app::PostLateUpdate_UpdateResolution* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateResolution>(get_class());
        }
        inline app::PostLateUpdate_UpdateResolution__Boxed* box(app::PostLateUpdate_UpdateResolution value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateResolution__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateResolution
} // namespace app::classes::types
