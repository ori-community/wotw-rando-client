#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateAudio.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAudio__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAudio__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateAudio {
        inline app::PostLateUpdate_UpdateAudio__Class** type_info() {
            static app::PostLateUpdate_UpdateAudio__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateAudio__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateAudio__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateAudio__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateAudio");
        }
        inline app::PostLateUpdate_UpdateAudio* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateAudio>(get_class());
        }
        inline app::PostLateUpdate_UpdateAudio__Boxed* box(app::PostLateUpdate_UpdateAudio value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateAudio__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateAudio
} // namespace app::classes::types
