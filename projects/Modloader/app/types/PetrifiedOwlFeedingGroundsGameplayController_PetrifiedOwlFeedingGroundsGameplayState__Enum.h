#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplaySta__En__Cl.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum {
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04750C00));
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsGameplayController", "PetrifiedOwlFeedingGroundsGameplayState");
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum
} // namespace app::classes::types
