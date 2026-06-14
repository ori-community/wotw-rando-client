#pragma once
#include <Modloader/app/structs/SceneUberStateCondition_PositionSource__Enum.h>
#include <Modloader/app/structs/SceneUberStateCondition_PositionSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneUberStateCondition_PositionSource__Enum {
        inline app::SceneUberStateCondition_PositionSource__Enum__Class** type_info() {
            static app::SceneUberStateCondition_PositionSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneUberStateCondition_PositionSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneUberStateCondition_PositionSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneUberStateCondition_PositionSource__Enum__Class>(type_info(), "", "SceneUberStateCondition", "PositionSource");
        }
        inline app::SceneUberStateCondition_PositionSource__Enum* create() {
            return il2cpp::create_object<app::SceneUberStateCondition_PositionSource__Enum>(get_class());
        }
    } // namespace SceneUberStateCondition_PositionSource__Enum
} // namespace app::classes::types
