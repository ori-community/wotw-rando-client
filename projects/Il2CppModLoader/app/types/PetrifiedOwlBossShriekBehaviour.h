#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossShriekBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossShriekBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossShriekBehaviour__Class>(type_info, "", "PetrifiedOwlBossShriekBehaviour");
        }
        inline app::PetrifiedOwlBossShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossShriekBehaviour
} // namespace app::classes::types
