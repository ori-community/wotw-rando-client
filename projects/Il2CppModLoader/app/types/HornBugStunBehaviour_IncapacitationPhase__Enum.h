#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugStunBehaviour_IncapacitationPhase__Enum {
        namespace {
            inline app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class** type_info = &type_info_ref;
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugStunBehaviour_IncapacitationPhase__Enum__Class>(type_info, "Moon", "HornBugStunBehaviour", "IncapacitationPhase");
        }
        inline app::HornBugStunBehaviour_IncapacitationPhase__Enum* create() {
            return il2cpp::create_object<app::HornBugStunBehaviour_IncapacitationPhase__Enum>(get_class());
        }
    } // namespace HornBugStunBehaviour_IncapacitationPhase__Enum
} // namespace app::classes::types
