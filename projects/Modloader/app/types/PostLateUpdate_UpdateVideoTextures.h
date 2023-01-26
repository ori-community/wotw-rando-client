#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateVideoTextures.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideoTextures__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideoTextures__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateVideoTextures {
        inline app::PostLateUpdate_UpdateVideoTextures__Class** type_info() {
            static app::PostLateUpdate_UpdateVideoTextures__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateVideoTextures__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateVideoTextures__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateVideoTextures__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateVideoTextures");
        }
        inline app::PostLateUpdate_UpdateVideoTextures* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateVideoTextures>(get_class());
        }
        inline app::PostLateUpdate_UpdateVideoTextures__Boxed* box(app::PostLateUpdate_UpdateVideoTextures value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateVideoTextures__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateVideoTextures
} // namespace app::classes::types
