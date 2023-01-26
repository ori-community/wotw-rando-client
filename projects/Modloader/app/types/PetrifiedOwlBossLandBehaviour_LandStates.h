#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_LandStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_LandStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour_LandStates {
        inline app::PetrifiedOwlBossLandBehaviour_LandStates__Class** type_info() {
            static app::PetrifiedOwlBossLandBehaviour_LandStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLandBehaviour_LandStates__Class**)(modloader::win::memory::resolve_rva(0x04728DE0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLandBehaviour_LandStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLandBehaviour_LandStates__Class>(type_info(), "", "PetrifiedOwlBossLandBehaviour", "LandStates");
        }
        inline app::PetrifiedOwlBossLandBehaviour_LandStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour_LandStates>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour_LandStates
} // namespace app::classes::types
