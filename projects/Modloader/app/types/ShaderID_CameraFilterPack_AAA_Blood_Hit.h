#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_Blood_Hit {
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class** type_info = (app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class**)(modloader::win::memory::resolve_rva(0x0477CD38));
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class>(type_info, "", "ShaderID_CameraFilterPack_AAA_Blood_Hit");
        }
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Hit* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_Blood_Hit>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_Blood_Hit
} // namespace app::classes::types
