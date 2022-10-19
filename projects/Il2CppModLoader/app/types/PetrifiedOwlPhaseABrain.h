#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseABrain {
        namespace {
            inline app::PetrifiedOwlPhaseABrain__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlPhaseABrain__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlPhaseABrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseABrain__Class>(type_info, "", "PetrifiedOwlPhaseABrain");
        }
        inline app::PetrifiedOwlPhaseABrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseABrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseABrain
} // namespace app::classes::types
