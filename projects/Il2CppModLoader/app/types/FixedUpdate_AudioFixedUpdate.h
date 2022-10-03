#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_AudioFixedUpdate {
        namespace {
            app::FixedUpdate_AudioFixedUpdate__Class* type_info_ref = nullptr;
        }
        app::FixedUpdate_AudioFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_AudioFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_AudioFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "AudioFixedUpdate");
        }
        inline app::FixedUpdate_AudioFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_AudioFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_AudioFixedUpdate__Boxed* box(app::FixedUpdate_AudioFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_AudioFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_AudioFixedUpdate
} // namespace app::classes::types
