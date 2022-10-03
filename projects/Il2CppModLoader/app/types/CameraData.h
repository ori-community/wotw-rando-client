#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraData__Class** type_info;
        inline app::CameraData__Class* get_class() {
            return il2cpp::get_class<app::CameraData__Class>(type_info, "", "CameraData");
        }
        inline app::CameraData* create() {
            return il2cpp::create_object<app::CameraData>(get_class());
        }
    } // namespace CameraData
} // namespace app::classes::types
