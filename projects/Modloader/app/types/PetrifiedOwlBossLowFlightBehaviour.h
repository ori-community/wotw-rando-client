#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour.h>

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
