#pragma once
#include <Modloader/app/structs/PostLateUpdate_DirectorRenderImage.h>
#include <Modloader/app/structs/PostLateUpdate_DirectorRenderImage__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_DirectorRenderImage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_DirectorRenderImage {
        inline app::PostLateUpdate_DirectorRenderImage__Class** type_info() {
            static app::PostLateUpdate_DirectorRenderImage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_DirectorRenderImage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_DirectorRenderImage__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_DirectorRenderImage__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "DirectorRenderImage");
        }
        inline app::PostLateUpdate_DirectorRenderImage* create() {
            return il2cpp::create_object<app::PostLateUpdate_DirectorRenderImage>(get_class());
        }
        inline app::PostLateUpdate_DirectorRenderImage__Boxed* box(app::PostLateUpdate_DirectorRenderImage value) {
            return il2cpp::box_value<app::PostLateUpdate_DirectorRenderImage__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_DirectorRenderImage
} // namespace app::classes::types
