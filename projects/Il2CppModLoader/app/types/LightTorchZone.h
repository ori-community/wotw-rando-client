#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightTorchZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightTorchZone__Class** type_info;
        inline app::LightTorchZone__Class* get_class() {
            return il2cpp::get_class<app::LightTorchZone__Class>(type_info, "", "LightTorchZone");
        }
        inline app::LightTorchZone* create() {
            return il2cpp::create_object<app::LightTorchZone>(get_class());
        }
    } // namespace LightTorchZone
} // namespace app::classes::types
