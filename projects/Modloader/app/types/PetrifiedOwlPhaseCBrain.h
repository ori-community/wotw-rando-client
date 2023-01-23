#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain__Class.h>
#include <Modloader/app/structs/PetrifiedOwlPhaseCBrain.h>

namespace app::classes::types {
    namespace PetrifiedOwlPhaseCBrain {
        namespace {
            inline app::PetrifiedOwlPhaseCBrain__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlPhaseCBrain__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlPhaseCBrain__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlPhaseCBrain__Class>(type_info, "", "PetrifiedOwlPhaseCBrain");
        }
        inline app::PetrifiedOwlPhaseCBrain* create() {
            return il2cpp::create_object<app::PetrifiedOwlPhaseCBrain>(get_class());
        }
    } // namespace PetrifiedOwlPhaseCBrain
} // namespace app::classes::types
