#pragma once
#include <Modloader/app/structs/PostLateUpdate_BatchModeUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_BatchModeUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_BatchModeUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_BatchModeUpdate {
        inline app::PostLateUpdate_BatchModeUpdate__Class** type_info() {
            static app::PostLateUpdate_BatchModeUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_BatchModeUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_BatchModeUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_BatchModeUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "BatchModeUpdate");
        }
        inline app::PostLateUpdate_BatchModeUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_BatchModeUpdate>(get_class());
        }
        inline app::PostLateUpdate_BatchModeUpdate__Boxed* box(app::PostLateUpdate_BatchModeUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_BatchModeUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_BatchModeUpdate
} // namespace app::classes::types
