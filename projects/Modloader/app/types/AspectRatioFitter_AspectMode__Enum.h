#pragma once
#include <Modloader/app/structs/AspectRatioFitter_AspectMode__Enum.h>
#include <Modloader/app/structs/AspectRatioFitter_AspectMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AspectRatioFitter_AspectMode__Enum {
        inline app::AspectRatioFitter_AspectMode__Enum__Class** type_info() {
            static app::AspectRatioFitter_AspectMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AspectRatioFitter_AspectMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AspectRatioFitter_AspectMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AspectRatioFitter_AspectMode__Enum__Class>(type_info(), "UnityEngine.UI", "AspectRatioFitter", "AspectMode");
        }
        inline app::AspectRatioFitter_AspectMode__Enum* create() {
            return il2cpp::create_object<app::AspectRatioFitter_AspectMode__Enum>(get_class());
        }
    } // namespace AspectRatioFitter_AspectMode__Enum
} // namespace app::classes::types
