#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1DiveLaserBehaviour {
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04746F48));
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1DiveLaserBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1DiveLaserBehaviour");
        }
        inline app::PetrifiedOwlBossFight1DiveLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1DiveLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1DiveLaserBehaviour
} // namespace app::classes::types
