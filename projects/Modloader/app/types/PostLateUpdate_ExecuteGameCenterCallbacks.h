#pragma once
#include <Modloader/app/structs/PostLateUpdate_ExecuteGameCenterCallbacks.h>
#include <Modloader/app/structs/PostLateUpdate_ExecuteGameCenterCallbacks__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ExecuteGameCenterCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ExecuteGameCenterCallbacks {
        inline app::PostLateUpdate_ExecuteGameCenterCallbacks__Class** type_info() {
            static app::PostLateUpdate_ExecuteGameCenterCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ExecuteGameCenterCallbacks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ExecuteGameCenterCallbacks__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ExecuteGameCenterCallbacks__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ExecuteGameCenterCallbacks");
        }
        inline app::PostLateUpdate_ExecuteGameCenterCallbacks* create() {
            return il2cpp::create_object<app::PostLateUpdate_ExecuteGameCenterCallbacks>(get_class());
        }
        inline app::PostLateUpdate_ExecuteGameCenterCallbacks__Boxed* box(app::PostLateUpdate_ExecuteGameCenterCallbacks value) {
            return il2cpp::box_value<app::PostLateUpdate_ExecuteGameCenterCallbacks__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ExecuteGameCenterCallbacks
} // namespace app::classes::types
