#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossRainOfFeathersBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossRainOfFeathersBehaviour__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour
} // namespace app::classes::types
