#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreUpdate_UpdateVideo {
        namespace {
            inline app::PreUpdate_UpdateVideo__Class* type_info_ref = nullptr;
        }
        inline app::PreUpdate_UpdateVideo__Class** type_info = &type_info_ref;
        inline app::PreUpdate_UpdateVideo__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_UpdateVideo__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "UpdateVideo");
        }
        inline app::PreUpdate_UpdateVideo* create() {
            return il2cpp::create_object<app::PreUpdate_UpdateVideo>(get_class());
        }
        inline app::PreUpdate_UpdateVideo__Boxed* box(app::PreUpdate_UpdateVideo value) {
            return il2cpp::box_value<app::PreUpdate_UpdateVideo__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_UpdateVideo
} // namespace app::classes::types
