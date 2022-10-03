#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1ClawSwipeBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1ClawSwipeBehaviour");
        }
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1ClawSwipeBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1ClawSwipeBehaviour
} // namespace app::classes::types
