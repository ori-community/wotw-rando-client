#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWorldArea_PlayerAbilityInfo {
        inline app::GameWorldArea_PlayerAbilityInfo__Class** type_info = (app::GameWorldArea_PlayerAbilityInfo__Class**)(modloader::win::memory::resolve_rva(0x04796338));
        inline app::GameWorldArea_PlayerAbilityInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorldArea_PlayerAbilityInfo__Class>(type_info, "", "GameWorldArea", "PlayerAbilityInfo");
        }
        inline app::GameWorldArea_PlayerAbilityInfo* create() {
            return il2cpp::create_object<app::GameWorldArea_PlayerAbilityInfo>(get_class());
        }
        inline app::GameWorldArea_PlayerAbilityInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::GameWorldArea_PlayerAbilityInfo__Array>(get_class(), size);
        }
        inline app::GameWorldArea_PlayerAbilityInfo__Array* create_array(const std::vector<app::GameWorldArea_PlayerAbilityInfo*>& items) {
            return il2cpp::array_new<app::GameWorldArea_PlayerAbilityInfo__Array>(get_class(), items);
        }
    } // namespace GameWorldArea_PlayerAbilityInfo
} // namespace app::classes::types
