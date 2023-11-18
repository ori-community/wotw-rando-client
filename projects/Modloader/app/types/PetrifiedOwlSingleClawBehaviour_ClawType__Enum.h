#pragma once
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour_ClawType__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawBehaviour_ClawType__Enum {
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class** type_info() {
            static app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class>(type_info(), "Moon", "PetrifiedOwlSingleClawBehaviour", "ClawType");
        }
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawBehaviour_ClawType__Enum
} // namespace app::classes::types
