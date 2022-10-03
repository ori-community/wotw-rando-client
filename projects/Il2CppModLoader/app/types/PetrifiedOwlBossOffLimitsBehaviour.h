#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossOffLimitsBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossOffLimitsBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossOffLimitsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossOffLimitsBehaviour__Class>(type_info, "", "PetrifiedOwlBossOffLimitsBehaviour");
        }
        inline app::PetrifiedOwlBossOffLimitsBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossOffLimitsBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossOffLimitsBehaviour
} // namespace app::classes::types
