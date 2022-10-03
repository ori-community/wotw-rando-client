#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_VFXUpdate {
        namespace {
            app::PostLateUpdate_VFXUpdate__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_VFXUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_VFXUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_VFXUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "VFXUpdate");
        }
        inline app::PostLateUpdate_VFXUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_VFXUpdate>(get_class());
        }
        inline app::PostLateUpdate_VFXUpdate__Boxed* box(app::PostLateUpdate_VFXUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_VFXUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_VFXUpdate
} // namespace app::classes::types
