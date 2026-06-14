#pragma once
#include <Modloader/app/structs/PetrifiedOwlPhaseBBrain.h>
#include <Modloader/app/structs/PetrifiedOwlPhaseBBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseBBrain {
        inline app::PetrifiedOwlPhaseBBrain__Class** type_info() {
            static app::PetrifiedOwlPhaseBBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlPhaseBBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlPhaseBBrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseBBrain__Class>(type_info(), "", "PetrifiedOwlPhaseBBrain");
        }
        inline app::PetrifiedOwlPhaseBBrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseBBrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseBBrain
} // namespace app::classes::types
