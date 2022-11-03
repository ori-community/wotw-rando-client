#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawHighBehaviour {
        namespace {
            inline app::PetrifiedOwlSingleClawHighBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSingleClawHighBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSingleClawHighBehaviour__Class>(type_info, "Moon", "PetrifiedOwlSingleClawHighBehaviour");
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawHighBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawHighBehaviour
} // namespace app::classes::types
