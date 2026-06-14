#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsState__Enum {
        inline app::PetrifiedOwlFeedingGroundsState__Enum__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlFeedingGroundsState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047505B8));
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsState__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsState");
        }
        inline app::PetrifiedOwlFeedingGroundsState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsState__Enum
} // namespace app::classes::types
