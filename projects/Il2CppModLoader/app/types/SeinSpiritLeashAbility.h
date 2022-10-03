#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSpiritLeashAbility__Class** type_info;
        inline app::SeinSpiritLeashAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritLeashAbility__Class>(type_info, "", "SeinSpiritLeashAbility");
        }
        inline app::SeinSpiritLeashAbility* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility>(get_class());
        }
    } // namespace SeinSpiritLeashAbility
} // namespace app::classes::types
