#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLocomotion {
        inline app::PetrifiedOwlBossLocomotion__Class** type_info() {
            static app::PetrifiedOwlBossLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0474C158));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLocomotion__Class>(type_info(), "", "PetrifiedOwlBossLocomotion");
        }
        inline app::PetrifiedOwlBossLocomotion* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLocomotion>(get_class());
        }
    } // namespace PetrifiedOwlBossLocomotion
} // namespace app::classes::types
