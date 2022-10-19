#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasScaler_Unit__Enum {
        namespace {
            inline app::CanvasScaler_Unit__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CanvasScaler_Unit__Enum__Class** type_info = &type_info_ref;
        inline app::CanvasScaler_Unit__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CanvasScaler_Unit__Enum__Class>(type_info, "UnityEngine.UI", "CanvasScaler", "Unit");
        }
        inline app::CanvasScaler_Unit__Enum* create() {
            return il2cpp::create_object<app::CanvasScaler_Unit__Enum>(get_class());
        }
    } // namespace CanvasScaler_Unit__Enum
} // namespace app::classes::types
