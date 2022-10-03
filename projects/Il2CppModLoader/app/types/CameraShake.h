#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShake {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraShake__Class** type_info;
        inline app::CameraShake__Class* get_class() {
            return il2cpp::get_class<app::CameraShake__Class>(type_info, "", "CameraShake");
        }
        inline app::CameraShake* create() {
            return il2cpp::create_object<app::CameraShake>(get_class());
        }
        inline app::CameraShake__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraShake__Array>(get_class(), size);
        }
    } // namespace CameraShake
} // namespace app::classes::types
