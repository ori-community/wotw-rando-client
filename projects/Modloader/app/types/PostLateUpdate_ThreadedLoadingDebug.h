#pragma once
#include <Modloader/app/structs/PostLateUpdate_ThreadedLoadingDebug.h>
#include <Modloader/app/structs/PostLateUpdate_ThreadedLoadingDebug__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ThreadedLoadingDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ThreadedLoadingDebug {
        inline app::PostLateUpdate_ThreadedLoadingDebug__Class** type_info() {
            static app::PostLateUpdate_ThreadedLoadingDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ThreadedLoadingDebug__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ThreadedLoadingDebug__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ThreadedLoadingDebug");
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug* create() {
            return il2cpp::create_object<app::PostLateUpdate_ThreadedLoadingDebug>(get_class());
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug__Boxed* box(app::PostLateUpdate_ThreadedLoadingDebug value) {
            return il2cpp::box_value<app::PostLateUpdate_ThreadedLoadingDebug__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ThreadedLoadingDebug
} // namespace app::classes::types
