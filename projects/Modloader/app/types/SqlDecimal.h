#pragma once
#include <Modloader/app/structs/SqlDecimal.h>
#include <Modloader/app/structs/SqlDecimal__Array.h>
#include <Modloader/app/structs/SqlDecimal__Boxed.h>
#include <Modloader/app/structs/SqlDecimal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDecimal {
        inline app::SqlDecimal__Class** type_info() {
            static app::SqlDecimal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDecimal__Class**)(modloader::win::memory::resolve_rva(0x047760A8));
            }
            return cache;
        }
        inline app::SqlDecimal__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimal__Class>(type_info(), "System.Data.SqlTypes", "SqlDecimal");
        }
        inline app::SqlDecimal* create() {
            return il2cpp::create_object<app::SqlDecimal>(get_class());
        }
        inline app::SqlDecimal__Boxed* box(app::SqlDecimal value) {
            return il2cpp::box_value<app::SqlDecimal__Boxed>(get_class(), value);
        }
        inline app::SqlDecimal__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlDecimal__Array>(get_class(), size);
        }
        inline app::SqlDecimal__Array* create_array(const std::vector<app::SqlDecimal>& items) {
            return il2cpp::array_new<app::SqlDecimal__Array>(get_class(), items);
        }
    } // namespace SqlDecimal
} // namespace app::classes::types
