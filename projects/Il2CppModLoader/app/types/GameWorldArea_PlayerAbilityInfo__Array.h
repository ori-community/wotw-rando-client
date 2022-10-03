#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameWorldArea_PlayerAbilityInfo__Array {
        namespace {
            app::GameWorldArea_PlayerAbilityInfo__Array__Class* type_info_ref = nullptr;
        }
        app::GameWorldArea_PlayerAbilityInfo__Array__Class** type_info = &type_info_ref;
        inline app::GameWorldArea_PlayerAbilityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GameWorldArea_PlayerAbilityInfo__Array__Class>(type_info, "", "GameWorldArea+PlayerAbilityInfo[]");
        }
        inline app::GameWorldArea_PlayerAbilityInfo__Array* create() {
            return il2cpp::create_object<app::GameWorldArea_PlayerAbilityInfo__Array>(get_class());
        }
    } // namespace GameWorldArea_PlayerAbilityInfo__Array
} // namespace app::classes::types
