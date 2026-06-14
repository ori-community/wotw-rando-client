#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateCustomRenderTextures.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCustomRenderTextures__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateCustomRenderTextures__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateCustomRenderTextures {
        inline app::PostLateUpdate_UpdateCustomRenderTextures__Class** type_info() {
            static app::PostLateUpdate_UpdateCustomRenderTextures__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateCustomRenderTextures__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateCustomRenderTextures__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateCustomRenderTextures__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateCustomRenderTextures");
        }
        inline app::PostLateUpdate_UpdateCustomRenderTextures* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateCustomRenderTextures>(get_class());
        }
        inline app::PostLateUpdate_UpdateCustomRenderTextures__Boxed* box(app::PostLateUpdate_UpdateCustomRenderTextures value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateCustomRenderTextures__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateCustomRenderTextures
} // namespace app::classes::types
