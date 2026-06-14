#pragma once
#include <Modloader/app/structs/PetrifiedOwlUberState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlUberState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlUberState__Enum {
        inline app::PetrifiedOwlUberState__Enum__Class** type_info() {
            static app::PetrifiedOwlUberState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlUberState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlUberState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlUberState__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlUberState");
        }
        inline app::PetrifiedOwlUberState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlUberState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlUberState__Enum
} // namespace app::classes::types
