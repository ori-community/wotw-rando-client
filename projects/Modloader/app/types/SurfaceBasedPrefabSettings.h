#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SurfaceBasedPrefabSettings__Class.h>
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>

namespace app::classes::types {
    namespace SurfaceBasedPrefabSettings {
        namespace {
            inline app::SurfaceBasedPrefabSettings__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceBasedPrefabSettings__Class** type_info = &type_info_ref;
        inline app::SurfaceBasedPrefabSettings__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedPrefabSettings__Class>(type_info, "", "SurfaceBasedPrefabSettings");
        }
        inline app::SurfaceBasedPrefabSettings* create() {
            return il2cpp::create_object<app::SurfaceBasedPrefabSettings>(get_class());
        }
    } // namespace SurfaceBasedPrefabSettings
} // namespace app::classes::types
