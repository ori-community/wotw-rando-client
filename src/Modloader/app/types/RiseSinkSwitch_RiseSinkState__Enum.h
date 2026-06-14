#pragma once
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum.h>
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RiseSinkSwitch_RiseSinkState__Enum {
        inline app::RiseSinkSwitch_RiseSinkState__Enum__Class** type_info() {
            static app::RiseSinkSwitch_RiseSinkState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RiseSinkSwitch_RiseSinkState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RiseSinkSwitch_RiseSinkState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RiseSinkSwitch_RiseSinkState__Enum__Class>(type_info(), "", "RiseSinkSwitch", "RiseSinkState");
        }
        inline app::RiseSinkSwitch_RiseSinkState__Enum* create() {
            return il2cpp::create_object<app::RiseSinkSwitch_RiseSinkState__Enum>(get_class());
        }
    } // namespace RiseSinkSwitch_RiseSinkState__Enum
} // namespace app::classes::types
