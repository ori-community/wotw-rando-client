#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_FinishFrameRendering {
        namespace {
            app::PostLateUpdate_FinishFrameRendering__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_FinishFrameRendering__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_FinishFrameRendering__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_FinishFrameRendering__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "FinishFrameRendering");
        }
        inline app::PostLateUpdate_FinishFrameRendering* create() {
            return il2cpp::create_object<app::PostLateUpdate_FinishFrameRendering>(get_class());
        }
        inline app::PostLateUpdate_FinishFrameRendering__Boxed* box(app::PostLateUpdate_FinishFrameRendering value) {
            return il2cpp::box_value<app::PostLateUpdate_FinishFrameRendering__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_FinishFrameRendering
} // namespace app::classes::types
