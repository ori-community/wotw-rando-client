#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_EnlightenRuntimeUpdate {
        namespace {
            app::PostLateUpdate_EnlightenRuntimeUpdate__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate_EnlightenRuntimeUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_EnlightenRuntimeUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_EnlightenRuntimeUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "EnlightenRuntimeUpdate");
        }
        inline app::PostLateUpdate_EnlightenRuntimeUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_EnlightenRuntimeUpdate>(get_class());
        }
        inline app::PostLateUpdate_EnlightenRuntimeUpdate__Boxed* box(app::PostLateUpdate_EnlightenRuntimeUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_EnlightenRuntimeUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_EnlightenRuntimeUpdate
} // namespace app::classes::types
