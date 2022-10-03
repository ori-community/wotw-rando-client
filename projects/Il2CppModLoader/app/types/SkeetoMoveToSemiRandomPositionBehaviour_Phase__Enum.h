#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum {
        namespace {
            app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class* type_info_ref = nullptr;
        }
        app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class** type_info = &type_info_ref;
        inline app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class>(type_info, "", "SkeetoMoveToSemiRandomPositionBehaviour", "Phase");
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum* create() {
            return il2cpp::create_object<app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum>(get_class());
        }
    } // namespace SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum
} // namespace app::classes::types
