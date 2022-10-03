#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideSpitBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1SideSpitBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideSpitBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1SideSpitBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideSpitBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideSpitBehaviour
} // namespace app::classes::types
