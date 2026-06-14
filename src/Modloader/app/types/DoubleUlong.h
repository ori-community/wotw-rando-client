#pragma once
#include <Modloader/app/structs/DoubleUlong.h>
#include <Modloader/app/structs/DoubleUlong__Boxed.h>
#include <Modloader/app/structs/DoubleUlong__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleUlong {
        inline app::DoubleUlong__Class** type_info() {
            static app::DoubleUlong__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoubleUlong__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoubleUlong__Class* get_class() {
            return il2cpp::get_class<app::DoubleUlong__Class>(type_info(), "System.Numerics", "DoubleUlong");
        }
        inline app::DoubleUlong* create() {
            return il2cpp::create_object<app::DoubleUlong>(get_class());
        }
        inline app::DoubleUlong__Boxed* box(app::DoubleUlong value) {
            return il2cpp::box_value<app::DoubleUlong__Boxed>(get_class(), value);
        }
    } // namespace DoubleUlong
} // namespace app::classes::types
