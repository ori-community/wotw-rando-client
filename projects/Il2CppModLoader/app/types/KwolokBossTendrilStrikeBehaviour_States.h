#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilStrikeBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendrilStrikeBehaviour_States__Class** type_info;
        inline app::KwolokBossTendrilStrikeBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendrilStrikeBehaviour_States__Class>(type_info, "", "KwolokBossTendrilStrikeBehaviour", "States");
        }
        inline app::KwolokBossTendrilStrikeBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossTendrilStrikeBehaviour_States>(get_class());
        }
    } // namespace KwolokBossTendrilStrikeBehaviour_States
} // namespace app::classes::types
