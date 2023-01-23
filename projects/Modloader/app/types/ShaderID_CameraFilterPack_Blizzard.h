#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blizzard__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blizzard.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blizzard {
        inline app::ShaderID_CameraFilterPack_Blizzard__Class** type_info = (app::ShaderID_CameraFilterPack_Blizzard__Class**)(modloader::win::memory::resolve_rva(0x04713718));
        inline app::ShaderID_CameraFilterPack_Blizzard__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blizzard__Class>(type_info, "", "ShaderID_CameraFilterPack_Blizzard");
        }
        inline app::ShaderID_CameraFilterPack_Blizzard* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blizzard>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blizzard
} // namespace app::classes::types
