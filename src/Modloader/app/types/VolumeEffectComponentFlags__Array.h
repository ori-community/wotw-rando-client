#pragma once
#include <Modloader/app/structs/VolumeEffectComponentFlags__Array.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponentFlags__Array {
        inline app::VolumeEffectComponentFlags__Array__Class** type_info() {
            static app::VolumeEffectComponentFlags__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEffectComponentFlags__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEffectComponentFlags__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponentFlags__Array__Class>(type_info(), "AmplifyColor", "VolumeEffectComponentFlags[]");
        }
        inline app::VolumeEffectComponentFlags__Array* create() {
            return il2cpp::create_object<app::VolumeEffectComponentFlags__Array>(get_class());
        }
    } // namespace VolumeEffectComponentFlags__Array
} // namespace app::classes::types
