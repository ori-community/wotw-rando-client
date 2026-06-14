#pragma once
#include <Modloader/app/structs/CanvasScaler_Unit__Enum.h>
#include <Modloader/app/structs/CanvasScaler_Unit__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasScaler_Unit__Enum {
        inline app::CanvasScaler_Unit__Enum__Class** type_info() {
            static app::CanvasScaler_Unit__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanvasScaler_Unit__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanvasScaler_Unit__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CanvasScaler_Unit__Enum__Class>(type_info(), "UnityEngine.UI", "CanvasScaler", "Unit");
        }
        inline app::CanvasScaler_Unit__Enum* create() {
            return il2cpp::create_object<app::CanvasScaler_Unit__Enum>(get_class());
        }
    } // namespace CanvasScaler_Unit__Enum
} // namespace app::classes::types
