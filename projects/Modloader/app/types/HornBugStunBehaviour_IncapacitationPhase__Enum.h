#pragma once
#include <Modloader/app/structs/HornBugStunBehaviour_IncapacitationPhase__Enum.h>
#include <Modloader/app/structs/HornBugStunBehaviour_IncapacitationPhase__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugStunBehaviour_IncapacitationPhase__Enum {
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class** type_info() {
            static app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class>(type_info(), "Moon", "HornBugStunBehaviour", "IncapacitationPhase");
        }
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum* create() {
            return il2cpp::create_object<app::HornBugStunBehaviour_IncapacitationPhase__Enum>(get_class());
        }
    } // namespace HornBugStunBehaviour_IncapacitationPhase__Enum
} // namespace app::classes::types
