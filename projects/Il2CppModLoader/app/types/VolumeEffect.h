#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEffect__Class** type_info;
        inline app::VolumeEffect__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffect__Class>(type_info, "AmplifyColor", "VolumeEffect");
        }
        inline app::VolumeEffect* create() {
            return il2cpp::create_object<app::VolumeEffect>(get_class());
        }
        inline app::VolumeEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffect__Array>(get_class(), size);
        }
        inline app::VolumeEffect__Array* create_array(const std::vector<app::VolumeEffect*>& items) {
            return il2cpp::array_new<app::VolumeEffect__Array>(get_class(), items);
        }
    } // namespace VolumeEffect
} // namespace app::classes::types
