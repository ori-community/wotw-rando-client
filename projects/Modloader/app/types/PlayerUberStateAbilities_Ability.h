#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Class.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Array.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_Ability {
        inline app::PlayerUberStateAbilities_Ability__Class** type_info = (app::PlayerUberStateAbilities_Ability__Class**)(modloader::win::memory::resolve_rva(0x04799F88));
        inline app::PlayerUberStateAbilities_Ability__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAbilities_Ability__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAbilities", "Ability");
        }
        inline app::PlayerUberStateAbilities_Ability* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_Ability>(get_class());
        }
        inline app::PlayerUberStateAbilities_Ability__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateAbilities_Ability__Array>(get_class(), size);
        }
        inline app::PlayerUberStateAbilities_Ability__Array* create_array(const std::vector<app::PlayerUberStateAbilities_Ability*>& items) {
            return il2cpp::array_new<app::PlayerUberStateAbilities_Ability__Array>(get_class(), items);
        }
    } // namespace PlayerUberStateAbilities_Ability
} // namespace app::classes::types
