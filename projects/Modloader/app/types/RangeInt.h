#pragma once
#include <Modloader/app/structs/RangeInt.h>
#include <Modloader/app/structs/RangeInt__Boxed.h>
#include <Modloader/app/structs/RangeInt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeInt {
        inline app::RangeInt__Class** type_info() {
            static app::RangeInt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RangeInt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RangeInt__Class* get_class() {
            return il2cpp::get_class<app::RangeInt__Class>(type_info(), "UnityEngine", "RangeInt");
        }
        inline app::RangeInt* create() {
            return il2cpp::create_object<app::RangeInt>(get_class());
        }
        inline app::RangeInt__Boxed* box(app::RangeInt value) {
            return il2cpp::box_value<app::RangeInt__Boxed>(get_class(), value);
        }
    } // namespace RangeInt
} // namespace app::classes::types
