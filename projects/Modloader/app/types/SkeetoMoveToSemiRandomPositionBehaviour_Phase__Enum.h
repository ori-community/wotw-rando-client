#pragma once
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum.h>
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum {
        inline app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class** type_info() {
            static app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Class>(type_info(), "", "SkeetoMoveToSemiRandomPositionBehaviour", "Phase");
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum* create() {
            return il2cpp::create_object<app::SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum>(get_class());
        }
    } // namespace SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum
} // namespace app::classes::types
