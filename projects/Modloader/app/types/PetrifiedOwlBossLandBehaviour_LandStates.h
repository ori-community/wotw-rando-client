#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_LandStates {
        inline app::PetrifiedOwlBossLandBehaviour_LandStates__Class** type_info = (app::PetrifiedOwlBossLandBehaviour_LandStates__Class**)(modloader::win::memory::resolve_rva(0x04728DE0));
        inline app::PetrifiedOwlBossLandBehaviour_LandStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_LandStates__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour", "LandStates");
        }
        inline app::PetrifiedOwlBossLandBehaviour_LandStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_LandStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_LandStates
} // namespace app::classes::types
