#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLaserCenterBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLaserCenterBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLaserCenterBehaviour {
        inline app::PetrifiedOwlBossLaserCenterBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossLaserCenterBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLaserCenterBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04714270));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLaserCenterBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLaserCenterBehaviour__Class>(type_info(), "", "PetrifiedOwlBossLaserCenterBehaviour");
        }
        inline app::PetrifiedOwlBossLaserCenterBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLaserCenterBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLaserCenterBehaviour
} // namespace app::classes::types
