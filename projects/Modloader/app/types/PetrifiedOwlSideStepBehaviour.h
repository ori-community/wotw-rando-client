#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSideStepBehaviour {
        namespace {
            inline app::PetrifiedOwlSideStepBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlSideStepBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSideStepBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSideStepBehaviour__Class>(type_info, "Moon", "PetrifiedOwlSideStepBehaviour");
        }
        inline app::PetrifiedOwlSideStepBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSideStepBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSideStepBehaviour
} // namespace app::classes::types
