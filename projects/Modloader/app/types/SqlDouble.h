#pragma once
#include <Modloader/app/structs/SqlDouble.h>
#include <Modloader/app/structs/SqlDouble__Array.h>
#include <Modloader/app/structs/SqlDouble__Boxed.h>
#include <Modloader/app/structs/SqlDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDouble {
        inline app::SqlDouble__Class** type_info() {
            static app::SqlDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDouble__Class**)(modloader::win::memory::resolve_rva(0x04799D20));
            }
            return cache;
        }
        inline app::SqlDouble__Class* get_class() {
            return il2cpp::get_class<app::SqlDouble__Class>(type_info(), "System.Data.SqlTypes", "SqlDouble");
        }
        inline app::SqlDouble* create() {
            return il2cpp::create_object<app::SqlDouble>(get_class());
        }
        inline app::SqlDouble__Boxed* box(app::SqlDouble value) {
            return il2cpp::box_value<app::SqlDouble__Boxed>(get_class(), value);
        }
        inline app::SqlDouble__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlDouble__Array>(get_class(), size);
        }
        inline app::SqlDouble__Array* create_array(const std::vector<app::SqlDouble>& items) {
            return il2cpp::array_new<app::SqlDouble__Array>(get_class(), items);
        }
    } // namespace SqlDouble
} // namespace app::classes::types
