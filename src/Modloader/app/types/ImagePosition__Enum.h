#pragma once
#include <Modloader/app/structs/ImagePosition__Enum.h>
#include <Modloader/app/structs/ImagePosition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImagePosition__Enum {
        inline app::ImagePosition__Enum__Class** type_info() {
            static app::ImagePosition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImagePosition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImagePosition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImagePosition__Enum__Class>(type_info(), "UnityEngine", "ImagePosition");
        }
        inline app::ImagePosition__Enum* create() {
            return il2cpp::create_object<app::ImagePosition__Enum>(get_class());
        }
    } // namespace ImagePosition__Enum
} // namespace app::classes::types
