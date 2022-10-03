#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossSpitBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossSpitBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossSpitBehaviour__Class>(type_info, "", "PetrifiedOwlBossSpitBehaviour");
        }
        inline app::PetrifiedOwlBossSpitBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossSpitBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossSpitBehaviour
} // namespace app::classes::types
