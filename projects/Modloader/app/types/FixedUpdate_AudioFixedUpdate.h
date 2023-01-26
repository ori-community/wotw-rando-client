#pragma once
#include <Modloader/app/structs/FixedUpdate_AudioFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_AudioFixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_AudioFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_AudioFixedUpdate {
        inline app::FixedUpdate_AudioFixedUpdate__Class** type_info() {
            static app::FixedUpdate_AudioFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_AudioFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_AudioFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_AudioFixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "AudioFixedUpdate");
        }
        inline app::FixedUpdate_AudioFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_AudioFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_AudioFixedUpdate__Boxed* box(app::FixedUpdate_AudioFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_AudioFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_AudioFixedUpdate
} // namespace app::classes::types
