#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEvents_KuAbilityEvents_c__Class** type_info;
        inline app::SeinEvents_KuAbilityEvents_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents_c__Class>(type_info, "Game", "SeinEvents+KuAbilityEvents", "<>c");
        }
        inline app::SeinEvents_KuAbilityEvents_c* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents_c>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents_c
} // namespace app::classes::types
