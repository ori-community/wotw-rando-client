#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Array__Class.h>
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Array.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_Ability__Array {
        namespace {
            inline app::PlayerUberStateAbilities_Ability__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerUberStateAbilities_Ability__Array__Class** type_info = &type_info_ref;
        inline app::PlayerUberStateAbilities_Ability__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAbilities_Ability__Array__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAbilities+Ability[]");
        }
        inline app::PlayerUberStateAbilities_Ability__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_Ability__Array>(get_class());
        }
    } // namespace PlayerUberStateAbilities_Ability__Array
} // namespace app::classes::types
