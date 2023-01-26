#pragma once
#include <Modloader/app/structs/WaterfallIntersectionMode__Enum.h>
#include <Modloader/app/structs/WaterfallIntersectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterfallIntersectionMode__Enum {
        inline app::WaterfallIntersectionMode__Enum__Class** type_info() {
            static app::WaterfallIntersectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterfallIntersectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterfallIntersectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WaterfallIntersectionMode__Enum__Class>(type_info(), "Moon", "WaterfallIntersectionMode");
        }
        inline app::WaterfallIntersectionMode__Enum* create() {
            return il2cpp::create_object<app::WaterfallIntersectionMode__Enum>(get_class());
        }
    } // namespace WaterfallIntersectionMode__Enum
} // namespace app::classes::types
