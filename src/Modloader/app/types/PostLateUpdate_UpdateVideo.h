#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateVideo {
        inline app::PostLateUpdate_UpdateVideo__Class** type_info() {
            static app::PostLateUpdate_UpdateVideo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateVideo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateVideo__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateVideo__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateVideo");
        }
        inline app::PostLateUpdate_UpdateVideo* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateVideo>(get_class());
        }
        inline app::PostLateUpdate_UpdateVideo__Boxed* box(app::PostLateUpdate_UpdateVideo value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateVideo__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateVideo
} // namespace app::classes::types
