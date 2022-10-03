#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour
} // namespace app::classes::types
