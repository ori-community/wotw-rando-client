#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectComponent {
        inline app::VolumeEffectComponent__Class** type_info = (app::VolumeEffectComponent__Class**)(modloader::win::memory::resolve_rva(0x047232D8));
        inline app::VolumeEffectComponent__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponent__Class>(type_info, "AmplifyColor", "VolumeEffectComponent");
        }
        inline app::VolumeEffectComponent* create() {
            return il2cpp::create_object<app::VolumeEffectComponent>(get_class());
        }
        inline app::VolumeEffectComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectComponent__Array>(get_class(), size);
        }
        inline app::VolumeEffectComponent__Array* create_array(const std::vector<app::VolumeEffectComponent*>& items) {
            return il2cpp::array_new<app::VolumeEffectComponent__Array>(get_class(), items);
        }
    } // namespace VolumeEffectComponent
} // namespace app::classes::types
