#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLocomotion {
        inline app::PetrifiedOwlBossLocomotion__Class** type_info = (app::PetrifiedOwlBossLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0474C158));
        inline app::PetrifiedOwlBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLocomotion__Class>(type_info, "", "PetrifiedOwlBossLocomotion");
        }
        inline app::PetrifiedOwlBossLocomotion* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLocomotion>(get_class());
        }
    } // namespace PetrifiedOwlBossLocomotion
} // namespace app::classes::types
