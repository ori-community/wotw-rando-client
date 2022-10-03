#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EffectType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EffectType__Enum__Class** type_info;
        inline app::EffectType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EffectType__Enum__Class>(type_info, "PlayFab.ProfilesModels", "EffectType");
        }
        inline app::EffectType__Enum* create() {
            return il2cpp::create_object<app::EffectType__Enum>(get_class());
        }
    } // namespace EffectType__Enum
} // namespace app::classes::types
