#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsState__Enum {
        inline app::PetrifiedOwlFeedingGroundsState__Enum__Class** type_info = (app::PetrifiedOwlFeedingGroundsState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047505B8));
        inline app::PetrifiedOwlFeedingGroundsState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsState__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsState");
        }
        inline app::PetrifiedOwlFeedingGroundsState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsState__Enum
} // namespace app::classes::types
