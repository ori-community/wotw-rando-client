#pragma once
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationEnd.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationEnd__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationEnd__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_DirectorUpdateAnimationEnd {
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd__Class** type_info() {
            static app::PreLateUpdate_DirectorUpdateAnimationEnd__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_DirectorUpdateAnimationEnd__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_DirectorUpdateAnimationEnd__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "DirectorUpdateAnimationEnd");
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd* create() {
            return il2cpp::create_object<app::PreLateUpdate_DirectorUpdateAnimationEnd>(get_class());
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd__Boxed* box(app::PreLateUpdate_DirectorUpdateAnimationEnd value) {
            return il2cpp::box_value<app::PreLateUpdate_DirectorUpdateAnimationEnd__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_DirectorUpdateAnimationEnd
} // namespace app::classes::types
