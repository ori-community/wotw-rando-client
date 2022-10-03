#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PresentAfterDraw {
        namespace {
            app::PostLateUpdate_PresentAfterDraw__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_PresentAfterDraw__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PresentAfterDraw__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PresentAfterDraw__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PresentAfterDraw");
        }
        inline app::PostLateUpdate_PresentAfterDraw* create() {
            return il2cpp::create_object<app::PostLateUpdate_PresentAfterDraw>(get_class());
        }
        inline app::PostLateUpdate_PresentAfterDraw__Boxed* box(app::PostLateUpdate_PresentAfterDraw value) {
            return il2cpp::box_value<app::PostLateUpdate_PresentAfterDraw__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PresentAfterDraw
} // namespace app::classes::types
