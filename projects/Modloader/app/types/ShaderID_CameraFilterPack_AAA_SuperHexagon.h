#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_SuperHexagon.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_SuperHexagon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_SuperHexagon {
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class** type_info() {
            static app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class**)(modloader::win::memory::resolve_rva(0x04714720));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class>(type_info(), "", "ShaderID_CameraFilterPack_AAA_SuperHexagon");
        }
        inline app::ShaderID_CameraFilterPack_AAA_SuperHexagon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_SuperHexagon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_SuperHexagon
} // namespace app::classes::types
