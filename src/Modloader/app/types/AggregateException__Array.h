#pragma once
#include <Modloader/app/structs/AggregateException__Array.h>
#include <Modloader/app/structs/AggregateException__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AggregateException__Array {
        inline app::AggregateException__Array__Class** type_info() {
            static app::AggregateException__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AggregateException__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AggregateException__Array__Class* get_class() {
            return il2cpp::get_class<app::AggregateException__Array__Class>(type_info(), "System", "AggregateException[]");
        }
        inline app::AggregateException__Array* create() {
            return il2cpp::create_object<app::AggregateException__Array>(get_class());
        }
    } // namespace AggregateException__Array
} // namespace app::classes::types
