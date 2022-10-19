#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider_CallbackFunction {
        inline app::DamageBasedSoundProvider_CallbackFunction__Class** type_info = (app::DamageBasedSoundProvider_CallbackFunction__Class**)(modloader::win::memory::resolve_rva(0x04760738));
        inline app::DamageBasedSoundProvider_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageBasedSoundProvider_CallbackFunction__Class>(type_info, "", "DamageBasedSoundProvider", "CallbackFunction");
        }
        inline app::DamageBasedSoundProvider_CallbackFunction* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider_CallbackFunction>(get_class());
        }
    } // namespace DamageBasedSoundProvider_CallbackFunction
} // namespace app::classes::types
