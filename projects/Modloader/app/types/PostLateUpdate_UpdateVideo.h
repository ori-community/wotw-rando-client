#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo__Class.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateVideo__Boxed.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateVideo {
        namespace {
            inline app::PostLateUpdate_UpdateVideo__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_UpdateVideo__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_UpdateVideo__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateVideo__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateVideo");
        }
        inline app::PostLateUpdate_UpdateVideo* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateVideo>(get_class());
        }
        inline app::PostLateUpdate_UpdateVideo__Boxed* box(app::PostLateUpdate_UpdateVideo value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateVideo__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateVideo
} // namespace app::classes::types
