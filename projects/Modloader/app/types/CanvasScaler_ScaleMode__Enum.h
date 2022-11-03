#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasScaler_ScaleMode__Enum {
        namespace {
            inline app::CanvasScaler_ScaleMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CanvasScaler_ScaleMode__Enum__Class** type_info = &type_info_ref;
        inline app::CanvasScaler_ScaleMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CanvasScaler_ScaleMode__Enum__Class>(type_info, "UnityEngine.UI", "CanvasScaler", "ScaleMode");
        }
        inline app::CanvasScaler_ScaleMode__Enum* create() {
            return il2cpp::create_object<app::CanvasScaler_ScaleMode__Enum>(get_class());
        }
    } // namespace CanvasScaler_ScaleMode__Enum
} // namespace app::classes::types
