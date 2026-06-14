#pragma once
#include <Modloader/app/structs/PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum {
        inline app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class** type_info() {
            static app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class>(type_info(), "Moon", "PetrifiedOwlSingleClawHighBehaviour", "ClawType");
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum
} // namespace app::classes::types
