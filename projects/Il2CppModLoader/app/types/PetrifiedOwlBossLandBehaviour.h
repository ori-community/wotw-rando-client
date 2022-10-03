#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossLandBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossLandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLandBehaviour__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour");
        }
        inline app::PetrifiedOwlBossLandBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour
} // namespace app::classes::types
