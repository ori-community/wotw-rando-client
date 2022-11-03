#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Lines {
        inline app::ShaderID_CameraFilterPack_Drawing_Lines__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Lines__Class**)(modloader::win::memory::resolve_rva(0x0472A088));
        inline app::ShaderID_CameraFilterPack_Drawing_Lines__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Lines__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Lines");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Lines* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Lines>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Lines
} // namespace app::classes::types
