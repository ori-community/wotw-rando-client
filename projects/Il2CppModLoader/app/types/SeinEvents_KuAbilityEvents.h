#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEvents_KuAbilityEvents__Class** type_info;
        inline app::SeinEvents_KuAbilityEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents__Class>(type_info, "Game", "SeinEvents", "KuAbilityEvents");
        }
        inline app::SeinEvents_KuAbilityEvents* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents
} // namespace app::classes::types
