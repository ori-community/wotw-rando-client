#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_Desert {
        namespace {
            inline app::CameraFilterPack_Gradients_Desert__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Gradients_Desert__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_Desert__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_Desert__Class>(type_info, "", "CameraFilterPack_Gradients_Desert");
        }
        inline app::CameraFilterPack_Gradients_Desert* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_Desert>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_Desert
} // namespace app::classes::types
