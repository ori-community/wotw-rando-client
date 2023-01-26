#pragma once
#include <Modloader/app/structs/PetrifiedOwlLookBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlLookBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookBehaviour {
        inline app::PetrifiedOwlLookBehaviour__Class** type_info() {
            static app::PetrifiedOwlLookBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlLookBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlLookBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlLookBehaviour");
        }
        inline app::PetrifiedOwlLookBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlLookBehaviour
} // namespace app::classes::types
