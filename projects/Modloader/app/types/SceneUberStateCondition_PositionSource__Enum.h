#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneUberStateCondition_PositionSource__Enum {
        namespace {
            inline app::SceneUberStateCondition_PositionSource__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SceneUberStateCondition_PositionSource__Enum__Class** type_info = &type_info_ref;
        inline app::SceneUberStateCondition_PositionSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneUberStateCondition_PositionSource__Enum__Class>(type_info, "", "SceneUberStateCondition", "PositionSource");
        }
        inline app::SceneUberStateCondition_PositionSource__Enum* create() {
            return il2cpp::create_object<app::SceneUberStateCondition_PositionSource__Enum>(get_class());
        }
    } // namespace SceneUberStateCondition_PositionSource__Enum
} // namespace app::classes::types
