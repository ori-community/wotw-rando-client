#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1GroundLaserBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1GroundLaserBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1GroundLaserBehaviour {
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047078B0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1GroundLaserBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1GroundLaserBehaviour");
        }
        inline app::PetrifiedOwlBossFight1GroundLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1GroundLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1GroundLaserBehaviour
} // namespace app::classes::types
