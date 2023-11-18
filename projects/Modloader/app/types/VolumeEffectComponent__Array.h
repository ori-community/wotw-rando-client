#pragma once
#include <Modloader/app/structs/VolumeEffectComponent__Array.h>
#include <Modloader/app/structs/VolumeEffectComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponent__Array {
        inline app::VolumeEffectComponent__Array__Class** type_info() {
            static app::VolumeEffectComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEffectComponent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEffectComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponent__Array__Class>(type_info(), "AmplifyColor", "VolumeEffectComponent[]");
        }
        inline app::VolumeEffectComponent__Array* create() {
            return il2cpp::create_object<app::VolumeEffectComponent__Array>(get_class());
        }
    } // namespace VolumeEffectComponent__Array
} // namespace app::classes::types
