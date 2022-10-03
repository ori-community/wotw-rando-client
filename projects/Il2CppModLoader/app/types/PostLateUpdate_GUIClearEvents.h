#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_GUIClearEvents {
        namespace {
            app::PostLateUpdate_GUIClearEvents__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_GUIClearEvents__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_GUIClearEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_GUIClearEvents__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "GUIClearEvents");
        }
        inline app::PostLateUpdate_GUIClearEvents* create() {
            return il2cpp::create_object<app::PostLateUpdate_GUIClearEvents>(get_class());
        }
        inline app::PostLateUpdate_GUIClearEvents__Boxed* box(app::PostLateUpdate_GUIClearEvents value) {
            return il2cpp::box_value<app::PostLateUpdate_GUIClearEvents__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_GUIClearEvents
} // namespace app::classes::types
