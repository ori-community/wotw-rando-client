#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLaserCenterBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLaserCenterBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossLaserCenterBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLaserCenterBehaviour__Class>(type_info, "", "PetrifiedOwlBossLaserCenterBehaviour");
        }
        inline app::PetrifiedOwlBossLaserCenterBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLaserCenterBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLaserCenterBehaviour
} // namespace app::classes::types
