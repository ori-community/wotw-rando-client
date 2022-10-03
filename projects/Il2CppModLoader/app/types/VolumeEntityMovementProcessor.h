#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEntityMovementProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VolumeEntityMovementProcessor__Class** type_info;
        inline app::VolumeEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::VolumeEntityMovementProcessor__Class>(type_info, "Moon", "VolumeEntityMovementProcessor");
        }
        inline app::VolumeEntityMovementProcessor* create() {
            return il2cpp::create_object<app::VolumeEntityMovementProcessor>(get_class());
        }
    } // namespace VolumeEntityMovementProcessor
} // namespace app::classes::types
