#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirMoveBehaviour_State__Enum {
        namespace {
            app::SkeetoAirMoveBehaviour_State__Enum__Class* type_info_ref = nullptr;
        }
        app::SkeetoAirMoveBehaviour_State__Enum__Class** type_info = &type_info_ref;
        inline app::SkeetoAirMoveBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoAirMoveBehaviour_State__Enum__Class>(type_info, "", "SkeetoAirMoveBehaviour", "State");
        }
        inline app::SkeetoAirMoveBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::SkeetoAirMoveBehaviour_State__Enum>(get_class());
        }
    } // namespace SkeetoAirMoveBehaviour_State__Enum
} // namespace app::classes::types
