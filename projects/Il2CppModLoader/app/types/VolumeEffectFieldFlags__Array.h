#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFieldFlags__Array {
        namespace {
            app::VolumeEffectFieldFlags__Array__Class* type_info_ref = nullptr;
        }
        app::VolumeEffectFieldFlags__Array__Class** type_info = &type_info_ref;
        inline app::VolumeEffectFieldFlags__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFieldFlags__Array__Class>(type_info, "AmplifyColor", "VolumeEffectFieldFlags[]");
        }
        inline app::VolumeEffectFieldFlags__Array* create() {
            return il2cpp::create_object<app::VolumeEffectFieldFlags__Array>(get_class());
        }
    } // namespace VolumeEffectFieldFlags__Array
} // namespace app::classes::types
