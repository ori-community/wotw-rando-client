#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_Blood_Plus.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_Blood_Plus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_Blood_Plus {
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class** type_info() {
            static app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class**)(modloader::win::memory::resolve_rva(0x047541F8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class>(type_info(), "", "ShaderID_CameraFilterPack_AAA_Blood_Plus");
        }
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Plus* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_Blood_Plus>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_Blood_Plus
} // namespace app::classes::types
