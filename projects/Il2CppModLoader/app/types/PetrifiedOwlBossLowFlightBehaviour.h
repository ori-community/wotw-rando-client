#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLowFlightBehaviour {
        namespace {
            inline app::PetrifiedOwlBossLowFlightBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossLowFlightBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLowFlightBehaviour__Class>(type_info, "", "PetrifiedOwlBossLowFlightBehaviour");
        }
        inline app::PetrifiedOwlBossLowFlightBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLowFlightBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLowFlightBehaviour
} // namespace app::classes::types
