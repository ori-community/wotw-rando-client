#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
