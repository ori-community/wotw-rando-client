#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SeinSpiritLeashAbility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SeinSpiritLeashAbility__Class** type_info;
        inline app::ShaderID_SeinSpiritLeashAbility__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinSpiritLeashAbility__Class>(type_info, "", "ShaderID_SeinSpiritLeashAbility");
        }
        inline app::ShaderID_SeinSpiritLeashAbility* create() {
            return il2cpp::create_object<app::ShaderID_SeinSpiritLeashAbility>(get_class());
        }
    } // namespace ShaderID_SeinSpiritLeashAbility
} // namespace app::classes::types
