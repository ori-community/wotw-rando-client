#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundProvider_CallbackFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundProvider_CallbackFunction__Class** type_info;
        inline app::SoundProvider_CallbackFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundProvider_CallbackFunction__Class>(type_info, "", "SoundProvider", "CallbackFunction");
        }
        inline app::SoundProvider_CallbackFunction* create() {
            return il2cpp::create_object<app::SoundProvider_CallbackFunction>(get_class());
        }
    } // namespace SoundProvider_CallbackFunction
} // namespace app::classes::types
