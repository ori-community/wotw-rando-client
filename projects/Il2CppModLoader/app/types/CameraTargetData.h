#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTargetData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraTargetData__Class** type_info;
        inline app::CameraTargetData__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetData__Class>(type_info, "", "CameraTargetData");
        }
        inline app::CameraTargetData* create() {
            return il2cpp::create_object<app::CameraTargetData>(get_class());
        }
    } // namespace CameraTargetData
} // namespace app::classes::types
