#pragma once
#include <Modloader/app/structs/PreUpdate_UpdateVideo.h>
#include <Modloader/app/structs/PreUpdate_UpdateVideo__Boxed.h>
#include <Modloader/app/structs/PreUpdate_UpdateVideo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_UpdateVideo {
        inline app::PreUpdate_UpdateVideo__Class** type_info() {
            static app::PreUpdate_UpdateVideo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_UpdateVideo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_UpdateVideo__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_UpdateVideo__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "UpdateVideo");
        }
        inline app::PreUpdate_UpdateVideo* create() {
            return il2cpp::create_object<app::PreUpdate_UpdateVideo>(get_class());
        }
        inline app::PreUpdate_UpdateVideo__Boxed* box(app::PreUpdate_UpdateVideo value) {
            return il2cpp::box_value<app::PreUpdate_UpdateVideo__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_UpdateVideo
} // namespace app::classes::types
