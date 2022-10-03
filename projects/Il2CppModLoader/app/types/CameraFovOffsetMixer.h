#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFovOffsetMixer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFovOffsetMixer__Class** type_info;
        inline app::CameraFovOffsetMixer__Class* get_class() {
            return il2cpp::get_class<app::CameraFovOffsetMixer__Class>(type_info, "", "CameraFovOffsetMixer");
        }
        inline app::CameraFovOffsetMixer* create() {
            return il2cpp::create_object<app::CameraFovOffsetMixer>(get_class());
        }
    } // namespace CameraFovOffsetMixer
} // namespace app::classes::types
