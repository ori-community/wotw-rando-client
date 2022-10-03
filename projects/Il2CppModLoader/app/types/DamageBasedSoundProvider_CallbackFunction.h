#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider_CallbackFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageBasedSoundProvider_CallbackFunction__Class** type_info;
        inline app::DamageBasedSoundProvider_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageBasedSoundProvider_CallbackFunction__Class>(type_info, "", "DamageBasedSoundProvider", "CallbackFunction");
        }
        inline app::DamageBasedSoundProvider_CallbackFunction* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider_CallbackFunction>(get_class());
        }
    } // namespace DamageBasedSoundProvider_CallbackFunction
} // namespace app::classes::types
