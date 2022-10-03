#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class>(type_info, "", "PetrifiedOwlBossDiveBombHorizontalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour
} // namespace app::classes::types
