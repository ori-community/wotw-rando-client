#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_SuperComputer {
        inline app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class** type_info = (app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class**)(modloader::win::memory::resolve_rva(0x0474CFD8));
        inline app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class>(type_info, "", "ShaderID_CameraFilterPack_AAA_SuperComputer");
        }
        inline app::ShaderID_CameraFilterPack_AAA_SuperComputer* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_SuperComputer>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_SuperComputer
} // namespace app::classes::types
