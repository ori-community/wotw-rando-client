#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceBasedPrefabSettings {
        namespace {
            app::SurfaceBasedPrefabSettings__Class* type_info_ref = nullptr;
        }
        app::SurfaceBasedPrefabSettings__Class** type_info = &type_info_ref;
        inline app::SurfaceBasedPrefabSettings__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedPrefabSettings__Class>(type_info, "", "SurfaceBasedPrefabSettings");
        }
        inline app::SurfaceBasedPrefabSettings* create() {
            return il2cpp::create_object<app::SurfaceBasedPrefabSettings>(get_class());
        }
    } // namespace SurfaceBasedPrefabSettings
} // namespace app::classes::types
