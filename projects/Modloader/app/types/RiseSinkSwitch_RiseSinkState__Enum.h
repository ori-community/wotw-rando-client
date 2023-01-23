#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum__Class.h>
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum.h>

namespace app::classes::types {
    namespace RiseSinkSwitch_RiseSinkState__Enum {
        namespace {
            inline app::RiseSinkSwitch_RiseSinkState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RiseSinkSwitch_RiseSinkState__Enum__Class** type_info = &type_info_ref;
        inline app::RiseSinkSwitch_RiseSinkState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RiseSinkSwitch_RiseSinkState__Enum__Class>(type_info, "", "RiseSinkSwitch", "RiseSinkState");
        }
        inline app::RiseSinkSwitch_RiseSinkState__Enum* create() {
            return il2cpp::create_object<app::RiseSinkSwitch_RiseSinkState__Enum>(get_class());
        }
    } // namespace RiseSinkSwitch_RiseSinkState__Enum
} // namespace app::classes::types
