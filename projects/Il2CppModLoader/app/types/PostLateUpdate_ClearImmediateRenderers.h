#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ClearImmediateRenderers {
        namespace {
            app::PostLateUpdate_ClearImmediateRenderers__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_ClearImmediateRenderers__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ClearImmediateRenderers__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ClearImmediateRenderers__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ClearImmediateRenderers");
        }
        inline app::PostLateUpdate_ClearImmediateRenderers* create() {
            return il2cpp::create_object<app::PostLateUpdate_ClearImmediateRenderers>(get_class());
        }
        inline app::PostLateUpdate_ClearImmediateRenderers__Boxed* box(app::PostLateUpdate_ClearImmediateRenderers value) {
            return il2cpp::box_value<app::PostLateUpdate_ClearImmediateRenderers__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ClearImmediateRenderers
} // namespace app::classes::types
