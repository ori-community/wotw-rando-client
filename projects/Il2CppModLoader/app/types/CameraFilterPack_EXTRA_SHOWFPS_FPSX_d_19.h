#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19 {
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class** type_info = (app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class**)(modloader::win::memory::resolve_rva(0x04753768));
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class>(type_info, "", "CameraFilterPack_EXTRA_SHOWFPS", "<FPSX>d__19");
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19
} // namespace app::classes::types
