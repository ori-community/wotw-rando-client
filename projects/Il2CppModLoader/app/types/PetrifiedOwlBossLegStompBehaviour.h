#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLegStompBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLegStompBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossLegStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLegStompBehaviour__Class>(type_info, "", "PetrifiedOwlBossLegStompBehaviour");
        }
        inline app::PetrifiedOwlBossLegStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLegStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLegStompBehaviour
} // namespace app::classes::types
