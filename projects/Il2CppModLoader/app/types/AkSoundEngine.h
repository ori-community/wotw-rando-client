#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSoundEngine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSoundEngine__Class** type_info;
        inline app::AkSoundEngine__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEngine__Class>(type_info, "", "AkSoundEngine");
        }
        inline app::AkSoundEngine* create() {
            return il2cpp::create_object<app::AkSoundEngine>(get_class());
        }
    } // namespace AkSoundEngine
} // namespace app::classes::types
