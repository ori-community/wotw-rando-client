#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraOffsetMenuItem__Class** type_info;
        inline app::CameraOffsetMenuItem__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetMenuItem__Class>(type_info, "", "CameraOffsetMenuItem");
        }
        inline app::CameraOffsetMenuItem* create() {
            return il2cpp::create_object<app::CameraOffsetMenuItem>(get_class());
        }
    } // namespace CameraOffsetMenuItem
} // namespace app::classes::types
