#pragma once
#include <Modloader/app/structs/PreLateUpdate_AIUpdatePostScript.h>
#include <Modloader/app/structs/PreLateUpdate_AIUpdatePostScript__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_AIUpdatePostScript__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_AIUpdatePostScript {
        inline app::PreLateUpdate_AIUpdatePostScript__Class** type_info() {
            static app::PreLateUpdate_AIUpdatePostScript__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_AIUpdatePostScript__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_AIUpdatePostScript__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_AIUpdatePostScript__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "AIUpdatePostScript");
        }
        inline app::PreLateUpdate_AIUpdatePostScript* create() {
            return il2cpp::create_object<app::PreLateUpdate_AIUpdatePostScript>(get_class());
        }
        inline app::PreLateUpdate_AIUpdatePostScript__Boxed* box(app::PreLateUpdate_AIUpdatePostScript value) {
            return il2cpp::box_value<app::PreLateUpdate_AIUpdatePostScript__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_AIUpdatePostScript
} // namespace app::classes::types
