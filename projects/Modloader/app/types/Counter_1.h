#pragma once
#include <Modloader/app/structs/Counter_1.h>
#include <Modloader/app/structs/Counter_1__Boxed.h>
#include <Modloader/app/structs/Counter_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Counter_1 {
        inline app::Counter_1__Class** type_info() {
            static app::Counter_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Counter_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Counter_1__Class* get_class() {
            return il2cpp::get_class<app::Counter_1__Class>(type_info(), "Moon", "Counter");
        }
        inline app::Counter_1* create() {
            return il2cpp::create_object<app::Counter_1>(get_class());
        }
        inline app::Counter_1__Boxed* box(app::Counter_1 value) {
            return il2cpp::box_value<app::Counter_1__Boxed>(get_class(), value);
        }
    } // namespace Counter_1
} // namespace app::classes::types
