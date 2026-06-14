#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum {
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsGameplayController", "PetrifiedOwlUberState");
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlUberState__Enum
} // namespace app::classes::types
