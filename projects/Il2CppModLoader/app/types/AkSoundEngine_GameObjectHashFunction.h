#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSoundEngine_GameObjectHashFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSoundEngine_GameObjectHashFunction__Class** type_info;
        inline app::AkSoundEngine_GameObjectHashFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::AkSoundEngine_GameObjectHashFunction__Class>(type_info, "", "AkSoundEngine", "GameObjectHashFunction");
        }
        inline app::AkSoundEngine_GameObjectHashFunction* create() {
            return il2cpp::create_object<app::AkSoundEngine_GameObjectHashFunction>(get_class());
        }
    } // namespace AkSoundEngine_GameObjectHashFunction
} // namespace app::classes::types
