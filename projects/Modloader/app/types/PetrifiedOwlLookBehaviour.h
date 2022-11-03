#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookBehaviour {
        namespace {
            inline app::PetrifiedOwlLookBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlLookBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlLookBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookBehaviour__Class>(type_info, "Moon", "PetrifiedOwlLookBehaviour");
        }
        inline app::PetrifiedOwlLookBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlLookBehaviour
} // namespace app::classes::types
