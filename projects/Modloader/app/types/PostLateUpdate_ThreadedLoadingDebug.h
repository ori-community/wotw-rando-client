#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_ThreadedLoadingDebug {
        namespace {
            inline app::PostLateUpdate_ThreadedLoadingDebug__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ThreadedLoadingDebug__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ThreadedLoadingDebug__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ThreadedLoadingDebug");
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug* create() {
            return il2cpp::create_object<app::PostLateUpdate_ThreadedLoadingDebug>(get_class());
        }
        inline app::PostLateUpdate_ThreadedLoadingDebug__Boxed* box(app::PostLateUpdate_ThreadedLoadingDebug value) {
            return il2cpp::box_value<app::PostLateUpdate_ThreadedLoadingDebug__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ThreadedLoadingDebug
} // namespace app::classes::types
