#pragma once
#include <Modloader/app/structs/PostLateUpdate_XRPostPresent.h>
#include <Modloader/app/structs/PostLateUpdate_XRPostPresent__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_XRPostPresent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_XRPostPresent {
        inline app::PostLateUpdate_XRPostPresent__Class** type_info() {
            static app::PostLateUpdate_XRPostPresent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_XRPostPresent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_XRPostPresent__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_XRPostPresent__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "XRPostPresent");
        }
        inline app::PostLateUpdate_XRPostPresent* create() {
            return il2cpp::create_object<app::PostLateUpdate_XRPostPresent>(get_class());
        }
        inline app::PostLateUpdate_XRPostPresent__Boxed* box(app::PostLateUpdate_XRPostPresent value) {
            return il2cpp::box_value<app::PostLateUpdate_XRPostPresent__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_XRPostPresent
} // namespace app::classes::types
