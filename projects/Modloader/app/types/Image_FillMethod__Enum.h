#pragma once
#include <Modloader/app/structs/Image_FillMethod__Enum.h>
#include <Modloader/app/structs/Image_FillMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Image_FillMethod__Enum {
        inline app::Image_FillMethod__Enum__Class** type_info() {
            static app::Image_FillMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Image_FillMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Image_FillMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Image_FillMethod__Enum__Class>(type_info(), "UnityEngine.UI", "Image", "FillMethod");
        }
        inline app::Image_FillMethod__Enum* create() {
            return il2cpp::create_object<app::Image_FillMethod__Enum>(get_class());
        }
    } // namespace Image_FillMethod__Enum
} // namespace app::classes::types
