#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_SuperComputer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_AAA_SuperComputer__Class** type_info;
        inline app::CameraFilterPack_AAA_SuperComputer__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_SuperComputer__Class>(type_info, "", "CameraFilterPack_AAA_SuperComputer");
        }
        inline app::CameraFilterPack_AAA_SuperComputer* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_SuperComputer>(get_class());
        }
    } // namespace CameraFilterPack_AAA_SuperComputer
} // namespace app::classes::types
