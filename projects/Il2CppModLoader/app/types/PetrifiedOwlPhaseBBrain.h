#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseBBrain {
        namespace {
            inline app::PetrifiedOwlPhaseBBrain__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlPhaseBBrain__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlPhaseBBrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseBBrain__Class>(type_info, "", "PetrifiedOwlPhaseBBrain");
        }
        inline app::PetrifiedOwlPhaseBBrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseBBrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseBBrain
} // namespace app::classes::types
