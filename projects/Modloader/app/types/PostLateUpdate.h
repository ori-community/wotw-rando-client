#pragma once
#include <Modloader/app/structs/PostLateUpdate.h>
#include <Modloader/app/structs/PostLateUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate {
        inline app::PostLateUpdate__Class** type_info() {
            static app::PostLateUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate__Class* get_class() {
            return il2cpp::get_class<app::PostLateUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate");
        }
        inline app::PostLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate>(get_class());
        }
        inline app::PostLateUpdate__Boxed* box(app::PostLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate
} // namespace app::classes::types
