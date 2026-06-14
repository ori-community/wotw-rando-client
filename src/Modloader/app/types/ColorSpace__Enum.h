#pragma once
#include <Modloader/app/structs/ColorSpace__Enum.h>
#include <Modloader/app/structs/ColorSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorSpace__Enum {
        inline app::ColorSpace__Enum__Class** type_info() {
            static app::ColorSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorSpace__Enum__Class>(type_info(), "UnityEngine", "ColorSpace");
        }
        inline app::ColorSpace__Enum* create() {
            return il2cpp::create_object<app::ColorSpace__Enum>(get_class());
        }
    } // namespace ColorSpace__Enum
} // namespace app::classes::types
