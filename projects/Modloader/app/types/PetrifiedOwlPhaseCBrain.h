#pragma once
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain.h>
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseCBrain {
        inline app::PetrifiedOwlPhaseCBrain__Class** type_info() {
            static app::PetrifiedOwlPhaseCBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlPhaseCBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlPhaseCBrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseCBrain__Class>(type_info(), "", "PetrifiedOwlPhaseCBrain");
        }
        inline app::PetrifiedOwlPhaseCBrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseCBrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseCBrain
} // namespace app::classes::types
