#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SplitTurnAnimation_State__Enum {
        namespace {
            inline app::SplitTurnAnimation_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SplitTurnAnimation_State__Enum__Class** type_info = &type_info_ref;
        inline app::SplitTurnAnimation_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SplitTurnAnimation_State__Enum__Class>(type_info, "", "SplitTurnAnimation", "State");
        }
        inline app::SplitTurnAnimation_State__Enum* create() {
            return il2cpp::create_object<app::SplitTurnAnimation_State__Enum>(get_class());
        }
    } // namespace SplitTurnAnimation_State__Enum
} // namespace app::classes::types
