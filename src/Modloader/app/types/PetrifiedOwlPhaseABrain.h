#pragma once
#include <Modloader/app/structs/PetrifiedOwlPhaseABrain.h>
#include <Modloader/app/structs/PetrifiedOwlPhaseABrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseABrain {
        inline app::PetrifiedOwlPhaseABrain__Class** type_info() {
            static app::PetrifiedOwlPhaseABrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlPhaseABrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlPhaseABrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseABrain__Class>(type_info(), "", "PetrifiedOwlPhaseABrain");
        }
        inline app::PetrifiedOwlPhaseABrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseABrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseABrain
} // namespace app::classes::types
