#pragma once
#include <Modloader/app/structs/KeyValuePair_2_AbilityTyp_Moo_uberSerializationWis_PlayerUberStateAbiliti_Abili___Arr__Cla.h>
#include <Modloader/app/structs/KeyValuePair_2_AbilityType_Moon_uberSerializationWis_PlayerUberStateAbilitie_Abilit___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array {
        inline app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class** type_info() {
            static app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[AbilityType,Moon.uberSerializationWisp.PlayerUberStateAbilities+Ability][]");
        }
        inline app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array>(get_class());
        }
    } // namespace KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array
} // namespace app::classes::types
