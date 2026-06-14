#pragma once
#include <Modloader/app/structs/SkeetoAirMoveBehaviour_State__Enum.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirMoveBehaviour_State__Enum {
        inline app::SkeetoAirMoveBehaviour_State__Enum__Class** type_info() {
            static app::SkeetoAirMoveBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoAirMoveBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoAirMoveBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoAirMoveBehaviour_State__Enum__Class>(type_info(), "", "SkeetoAirMoveBehaviour", "State");
        }
        inline app::SkeetoAirMoveBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::SkeetoAirMoveBehaviour_State__Enum>(get_class());
        }
    } // namespace SkeetoAirMoveBehaviour_State__Enum
} // namespace app::classes::types
