#pragma once
#include <Modloader/app/structs/Trail_TrailAlignment__Enum.h>
#include <Modloader/app/structs/Trail_TrailAlignment__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trail_TrailAlignment__Enum {
        inline app::Trail_TrailAlignment__Enum__Class** type_info() {
            static app::Trail_TrailAlignment__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Trail_TrailAlignment__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Trail_TrailAlignment__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_TrailAlignment__Enum__Class>(type_info(), "Moon", "Trail", "TrailAlignment");
        }
        inline app::Trail_TrailAlignment__Enum* create() {
            return il2cpp::create_object<app::Trail_TrailAlignment__Enum>(get_class());
        }
    } // namespace Trail_TrailAlignment__Enum
} // namespace app::classes::types
