#pragma once
#include <Modloader/app/structs/VolumeEffectFieldFlags__Array.h>
#include <Modloader/app/structs/VolumeEffectFieldFlags__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFieldFlags__Array {
        inline app::VolumeEffectFieldFlags__Array__Class** type_info() {
            static app::VolumeEffectFieldFlags__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEffectFieldFlags__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEffectFieldFlags__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFieldFlags__Array__Class>(type_info(), "AmplifyColor", "VolumeEffectFieldFlags[]");
        }
        inline app::VolumeEffectFieldFlags__Array* create() {
            return il2cpp::create_object<app::VolumeEffectFieldFlags__Array>(get_class());
        }
    } // namespace VolumeEffectFieldFlags__Array
} // namespace app::classes::types
