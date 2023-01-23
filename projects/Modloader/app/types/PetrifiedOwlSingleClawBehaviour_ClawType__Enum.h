#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour_ClawType__Enum.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawBehaviour_ClawType__Enum {
        namespace {
            inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class>(type_info, "Moon", "PetrifiedOwlSingleClawBehaviour", "ClawType");
        }
        inline app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawBehaviour_ClawType__Enum>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawBehaviour_ClawType__Enum
} // namespace app::classes::types
