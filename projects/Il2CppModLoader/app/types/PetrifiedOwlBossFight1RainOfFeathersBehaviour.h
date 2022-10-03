#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1RainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour
} // namespace app::classes::types
