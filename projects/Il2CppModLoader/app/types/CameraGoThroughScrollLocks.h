#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraGoThroughScrollLocks {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraGoThroughScrollLocks__Class** type_info;
        inline app::CameraGoThroughScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::CameraGoThroughScrollLocks__Class>(type_info, "", "CameraGoThroughScrollLocks");
        }
        inline app::CameraGoThroughScrollLocks* create() {
            return il2cpp::create_object<app::CameraGoThroughScrollLocks>(get_class());
        }
    } // namespace CameraGoThroughScrollLocks
} // namespace app::classes::types
