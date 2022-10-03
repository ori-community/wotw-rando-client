#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Mirror {
        namespace {
            app::CameraFilterPack_FX_Mirror__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_FX_Mirror__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_FX_Mirror__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Mirror__Class>(type_info, "", "CameraFilterPack_FX_Mirror");
        }
        inline app::CameraFilterPack_FX_Mirror* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Mirror>(get_class());
        }
    } // namespace CameraFilterPack_FX_Mirror
} // namespace app::classes::types
