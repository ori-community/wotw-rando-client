#pragma once
#include <Modloader/app/structs/PostLateUpdate_VFXUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_VFXUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_VFXUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_VFXUpdate {
        inline app::PostLateUpdate_VFXUpdate__Class** type_info() {
            static app::PostLateUpdate_VFXUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_VFXUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_VFXUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_VFXUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "VFXUpdate");
        }
        inline app::PostLateUpdate_VFXUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_VFXUpdate>(get_class());
        }
        inline app::PostLateUpdate_VFXUpdate__Boxed* box(app::PostLateUpdate_VFXUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_VFXUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_VFXUpdate
} // namespace app::classes::types
