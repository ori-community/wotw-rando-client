#pragma once
#include <Modloader/app/structs/SplitTurnAnimation_State__Enum.h>
#include <Modloader/app/structs/SplitTurnAnimation_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimation_State__Enum {
        inline app::SplitTurnAnimation_State__Enum__Class** type_info() {
            static app::SplitTurnAnimation_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitTurnAnimation_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitTurnAnimation_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SplitTurnAnimation_State__Enum__Class>(type_info(), "", "SplitTurnAnimation", "State");
        }
        inline app::SplitTurnAnimation_State__Enum* create() {
            return il2cpp::create_object<app::SplitTurnAnimation_State__Enum>(get_class());
        }
    } // namespace SplitTurnAnimation_State__Enum
} // namespace app::classes::types
