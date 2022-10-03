#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour
} // namespace app::classes::types
