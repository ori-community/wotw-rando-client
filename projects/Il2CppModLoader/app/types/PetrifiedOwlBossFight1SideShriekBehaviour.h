#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideShriekBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1SideShriekBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideShriekBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1SideShriekBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideShriekBehaviour
} // namespace app::classes::types
