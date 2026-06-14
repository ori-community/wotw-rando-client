#pragma once
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>
#include <Modloader/app/structs/SurfaceBasedPrefabSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceBasedPrefabSettings {
        inline app::SurfaceBasedPrefabSettings__Class** type_info() {
            static app::SurfaceBasedPrefabSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceBasedPrefabSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceBasedPrefabSettings__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedPrefabSettings__Class>(type_info(), "", "SurfaceBasedPrefabSettings");
        }
        inline app::SurfaceBasedPrefabSettings* create() {
            return il2cpp::create_object<app::SurfaceBasedPrefabSettings>(get_class());
        }
    } // namespace SurfaceBasedPrefabSettings
} // namespace app::classes::types
