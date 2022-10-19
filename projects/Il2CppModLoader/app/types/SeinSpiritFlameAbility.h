#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritFlameAbility {
        namespace {
            inline app::SeinSpiritFlameAbility__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritFlameAbility__Class** type_info = &type_info_ref;
        inline app::SeinSpiritFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlameAbility__Class>(type_info, "", "SeinSpiritFlameAbility");
        }
        inline app::SeinSpiritFlameAbility* create() {
            return il2cpp::create_object<app::SeinSpiritFlameAbility>(get_class());
        }
    } // namespace SeinSpiritFlameAbility
} // namespace app::classes::types
