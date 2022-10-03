#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossTripleSlamBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossTripleSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTripleSlamBehaviour__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour
} // namespace app::classes::types
