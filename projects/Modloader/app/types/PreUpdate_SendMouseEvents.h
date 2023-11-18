#pragma once
#include <Modloader/app/structs/PreUpdate_SendMouseEvents.h>
#include <Modloader/app/structs/PreUpdate_SendMouseEvents__Boxed.h>
#include <Modloader/app/structs/PreUpdate_SendMouseEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_SendMouseEvents {
        inline app::PreUpdate_SendMouseEvents__Class** type_info() {
            static app::PreUpdate_SendMouseEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_SendMouseEvents__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_SendMouseEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_SendMouseEvents__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "SendMouseEvents");
        }
        inline app::PreUpdate_SendMouseEvents* create() {
            return il2cpp::create_object<app::PreUpdate_SendMouseEvents>(get_class());
        }
        inline app::PreUpdate_SendMouseEvents__Boxed* box(app::PreUpdate_SendMouseEvents value) {
            return il2cpp::box_value<app::PreUpdate_SendMouseEvents__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_SendMouseEvents
} // namespace app::classes::types
