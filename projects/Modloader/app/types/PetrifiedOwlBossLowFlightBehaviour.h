#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour {
        inline app::PetrifiedOwlBossLowFlightBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossLowFlightBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossLowFlightBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLowFlightBehaviour__Class>(type_info(), "", "PetrifiedOwlBossLowFlightBehaviour");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour
} // namespace app::classes::types
