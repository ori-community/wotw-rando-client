#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectComponentFlags__Array {
        namespace {
            inline app::VolumeEffectComponentFlags__Array__Class* type_info_ref = nullptr;
        }
        inline app::VolumeEffectComponentFlags__Array__Class** type_info = &type_info_ref;
        inline app::VolumeEffectComponentFlags__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponentFlags__Array__Class>(type_info, "AmplifyColor", "VolumeEffectComponentFlags[]");
        }
        inline app::VolumeEffectComponentFlags__Array* create() {
            return il2cpp::create_object<app::VolumeEffectComponentFlags__Array>(get_class());
        }
    } // namespace VolumeEffectComponentFlags__Array
} // namespace app::classes::types
