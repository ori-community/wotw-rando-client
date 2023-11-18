#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_BluePrint.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_BluePrint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_BluePrint {
        inline app::ShaderID_CameraFilterPack_Drawing_BluePrint__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_BluePrint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_BluePrint__Class**)(modloader::win::memory::resolve_rva(0x04705950));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_BluePrint__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_BluePrint__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_BluePrint");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_BluePrint* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_BluePrint>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_BluePrint
} // namespace app::classes::types
