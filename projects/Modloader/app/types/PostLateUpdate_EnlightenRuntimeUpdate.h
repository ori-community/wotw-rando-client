#pragma once
#include <Modloader/app/structs/PostLateUpdate_EnlightenRuntimeUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_EnlightenRuntimeUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_EnlightenRuntimeUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_EnlightenRuntimeUpdate {
        inline app::PostLateUpdate_EnlightenRuntimeUpdate__Class** type_info() {
            static app::PostLateUpdate_EnlightenRuntimeUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_EnlightenRuntimeUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_EnlightenRuntimeUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_EnlightenRuntimeUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "EnlightenRuntimeUpdate");
        }
        inline app::PostLateUpdate_EnlightenRuntimeUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_EnlightenRuntimeUpdate>(get_class());
        }
        inline app::PostLateUpdate_EnlightenRuntimeUpdate__Boxed* box(app::PostLateUpdate_EnlightenRuntimeUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_EnlightenRuntimeUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_EnlightenRuntimeUpdate
} // namespace app::classes::types
