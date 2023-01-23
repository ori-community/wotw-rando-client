#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class** type_info = (app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class**)(modloader::win::memory::resolve_rva(0x0473F5B0));
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour", "DiveLaserStates");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates
} // namespace app::classes::types
