#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraData {
        inline app::CameraData__Class** type_info = (app::CameraData__Class**)(modloader::win::memory::resolve_rva(0x0478E0B8));
        inline app::CameraData__Class* get_class() {
            return il2cpp::get_class<app::CameraData__Class>(type_info, "", "CameraData");
        }
        inline app::CameraData* create() {
            return il2cpp::create_object<app::CameraData>(get_class());
        }
    } // namespace CameraData
} // namespace app::classes::types
