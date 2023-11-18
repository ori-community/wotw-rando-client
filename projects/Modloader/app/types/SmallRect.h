#pragma once
#include <Modloader/app/structs/SmallRect.h>
#include <Modloader/app/structs/SmallRect__Boxed.h>
#include <Modloader/app/structs/SmallRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallRect {
        inline app::SmallRect__Class** type_info() {
            static app::SmallRect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmallRect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmallRect__Class* get_class() {
            return il2cpp::get_class<app::SmallRect__Class>(type_info(), "System", "SmallRect");
        }
        inline app::SmallRect* create() {
            return il2cpp::create_object<app::SmallRect>(get_class());
        }
        inline app::SmallRect__Boxed* box(app::SmallRect value) {
            return il2cpp::box_value<app::SmallRect__Boxed>(get_class(), value);
        }
    } // namespace SmallRect
} // namespace app::classes::types
