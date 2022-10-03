#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateRectTransform {
        namespace {
            app::PostLateUpdate_UpdateRectTransform__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_UpdateRectTransform__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateRectTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateRectTransform__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateRectTransform");
        }
        inline app::PostLateUpdate_UpdateRectTransform* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateRectTransform>(get_class());
        }
        inline app::PostLateUpdate_UpdateRectTransform__Boxed* box(app::PostLateUpdate_UpdateRectTransform value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateRectTransform__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateRectTransform
} // namespace app::classes::types
