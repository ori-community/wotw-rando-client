#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_InverChromiLum {
        namespace {
            inline app::CameraFilterPack_FX_InverChromiLum__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_FX_InverChromiLum__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_FX_InverChromiLum__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_InverChromiLum__Class>(type_info, "", "CameraFilterPack_FX_InverChromiLum");
        }
        inline app::CameraFilterPack_FX_InverChromiLum* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_InverChromiLum>(get_class());
        }
    } // namespace CameraFilterPack_FX_InverChromiLum
} // namespace app::classes::types
