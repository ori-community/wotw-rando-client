#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class** type_info() {
            static app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class**)(modloader::win::memory::resolve_rva(0x0473F5B0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class>(type_info(), "", "PetrifiedOwlBossFight1DiveLaserBehaviour", "DiveLaserStates");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates
} // namespace app::classes::types
