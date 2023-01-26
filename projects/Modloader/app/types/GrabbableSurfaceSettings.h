#pragma once
#include <Modloader/app/structs/GrabbableSurfaceSettings.h>
#include <Modloader/app/structs/GrabbableSurfaceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceSettings {
        inline app::GrabbableSurfaceSettings__Class** type_info() {
            static app::GrabbableSurfaceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrabbableSurfaceSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrabbableSurfaceSettings__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurfaceSettings__Class>(type_info(), "", "GrabbableSurfaceSettings");
        }
        inline app::GrabbableSurfaceSettings* create() {
            return il2cpp::create_object<app::GrabbableSurfaceSettings>(get_class());
        }
    } // namespace GrabbableSurfaceSettings
} // namespace app::classes::types
