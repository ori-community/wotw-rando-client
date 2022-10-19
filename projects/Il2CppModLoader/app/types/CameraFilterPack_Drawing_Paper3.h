#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Paper3 {
        namespace {
            inline app::CameraFilterPack_Drawing_Paper3__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Drawing_Paper3__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_Paper3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Paper3__Class>(type_info, "", "CameraFilterPack_Drawing_Paper3");
        }
        inline app::CameraFilterPack_Drawing_Paper3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Paper3>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Paper3
} // namespace app::classes::types
