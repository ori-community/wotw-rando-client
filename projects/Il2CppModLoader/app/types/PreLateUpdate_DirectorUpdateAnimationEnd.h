#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_DirectorUpdateAnimationEnd {
        namespace {
            app::PreLateUpdate_DirectorUpdateAnimationEnd__Class* type_info_ref = nullptr;
        }
        app::PreLateUpdate_DirectorUpdateAnimationEnd__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_DirectorUpdateAnimationEnd__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "DirectorUpdateAnimationEnd");
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd* create() {
            return il2cpp::create_object<app::PreLateUpdate_DirectorUpdateAnimationEnd>(get_class());
        }
        inline app::PreLateUpdate_DirectorUpdateAnimationEnd__Boxed* box(app::PreLateUpdate_DirectorUpdateAnimationEnd value) {
            return il2cpp::box_value<app::PreLateUpdate_DirectorUpdateAnimationEnd__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_DirectorUpdateAnimationEnd
} // namespace app::classes::types
