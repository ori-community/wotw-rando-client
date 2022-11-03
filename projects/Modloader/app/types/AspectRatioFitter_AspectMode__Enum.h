#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AspectRatioFitter_AspectMode__Enum {
        namespace {
            inline app::AspectRatioFitter_AspectMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AspectRatioFitter_AspectMode__Enum__Class** type_info = &type_info_ref;
        inline app::AspectRatioFitter_AspectMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AspectRatioFitter_AspectMode__Enum__Class>(type_info, "UnityEngine.UI", "AspectRatioFitter", "AspectMode");
        }
        inline app::AspectRatioFitter_AspectMode__Enum* create() {
            return il2cpp::create_object<app::AspectRatioFitter_AspectMode__Enum>(get_class());
        }
    } // namespace AspectRatioFitter_AspectMode__Enum
} // namespace app::classes::types
