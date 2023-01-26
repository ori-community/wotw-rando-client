#pragma once
#include <Modloader/app/structs/PetrifiedOwlLookState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlLookState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLookState__Enum {
        inline app::PetrifiedOwlLookState__Enum__Class** type_info() {
            static app::PetrifiedOwlLookState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlLookState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlLookState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLookState__Enum__Class>(type_info(), "Moon", "PetrifiedOwlLookState");
        }
        inline app::PetrifiedOwlLookState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlLookState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlLookState__Enum
} // namespace app::classes::types
