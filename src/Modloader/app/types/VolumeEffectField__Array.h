#pragma once
#include <Modloader/app/structs/VolumeEffectField__Array.h>
#include <Modloader/app/structs/VolumeEffectField__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectField__Array {
        inline app::VolumeEffectField__Array__Class** type_info() {
            static app::VolumeEffectField__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEffectField__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEffectField__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectField__Array__Class>(type_info(), "AmplifyColor", "VolumeEffectField[]");
        }
        inline app::VolumeEffectField__Array* create() {
            return il2cpp::create_object<app::VolumeEffectField__Array>(get_class());
        }
    } // namespace VolumeEffectField__Array
} // namespace app::classes::types
