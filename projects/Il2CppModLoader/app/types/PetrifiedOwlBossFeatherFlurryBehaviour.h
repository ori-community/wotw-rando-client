#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFeatherFlurryBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossFeatherFlurryBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFeatherFlurryBehaviour__Class>(type_info, "", "PetrifiedOwlBossFeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFeatherFlurryBehaviour
} // namespace app::classes::types
