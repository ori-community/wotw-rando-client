#pragma once
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationBegin.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationBegin__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorUpdateAnimationBegin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_DirectorUpdateAnimationBegin {
        inline app::PreLateUpdate_DirectorUpdateAnimationBegin__Class** type_info() {
            static app::PreLateUpdate_DirectorUpdateAnimationBegin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_DirectorUpdateAnimationBegin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationBegin__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_DirectorUpdateAnimationBegin__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "DirectorUpdateAnimationBegin");
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationBegin* create() {
            return il2cpp::create_object<app::PreLateUpdate_DirectorUpdateAnimationBegin>(get_class());
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationBegin__Boxed* box(app::PreLateUpdate_DirectorUpdateAnimationBegin value) {
            return il2cpp::box_value<app::PreLateUpdate_DirectorUpdateAnimationBegin__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_DirectorUpdateAnimationBegin
} // namespace app::classes::types
