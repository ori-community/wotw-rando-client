#pragma once
#include <Modloader/app/structs/PostLateUpdate_GUIClearEvents.h>
#include <Modloader/app/structs/PostLateUpdate_GUIClearEvents__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_GUIClearEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_GUIClearEvents {
        inline app::PostLateUpdate_GUIClearEvents__Class** type_info() {
            static app::PostLateUpdate_GUIClearEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_GUIClearEvents__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_GUIClearEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_GUIClearEvents__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "GUIClearEvents");
        }
        inline app::PostLateUpdate_GUIClearEvents* create() {
            return il2cpp::create_object<app::PostLateUpdate_GUIClearEvents>(get_class());
        }
        inline app::PostLateUpdate_GUIClearEvents__Boxed* box(app::PostLateUpdate_GUIClearEvents value) {
            return il2cpp::box_value<app::PostLateUpdate_GUIClearEvents__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_GUIClearEvents
} // namespace app::classes::types
