#pragma once
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19 {
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class** type_info() {
            static app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class**)(modloader::win::memory::resolve_rva(0x04753768));
            }
            return cache;
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19__Class>(type_info(), "", "CameraFilterPack_EXTRA_SHOWFPS", "<FPSX>d__19");
        }
        inline app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_SHOWFPS_FPSX_d_19
} // namespace app::classes::types
