#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateVideoTextures {
        namespace {
            inline app::PostLateUpdate_UpdateVideoTextures__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_UpdateVideoTextures__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateVideoTextures__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateVideoTextures__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateVideoTextures");
        }
        inline app::PostLateUpdate_UpdateVideoTextures* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateVideoTextures>(get_class());
        }
        inline app::PostLateUpdate_UpdateVideoTextures__Boxed* box(app::PostLateUpdate_UpdateVideoTextures value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateVideoTextures__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateVideoTextures
} // namespace app::classes::types
