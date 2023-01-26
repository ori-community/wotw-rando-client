#pragma once
#include <Modloader/app/structs/SqlMoney.h>
#include <Modloader/app/structs/SqlMoney__Array.h>
#include <Modloader/app/structs/SqlMoney__Boxed.h>
#include <Modloader/app/structs/SqlMoney__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlMoney {
        inline app::SqlMoney__Class** type_info() {
            static app::SqlMoney__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlMoney__Class**)(modloader::win::memory::resolve_rva(0x04726918));
            }
            return cache;
        }
        inline app::SqlMoney__Class* get_class() {
            return il2cpp::get_class<app::SqlMoney__Class>(type_info(), "System.Data.SqlTypes", "SqlMoney");
        }
        inline app::SqlMoney* create() {
            return il2cpp::create_object<app::SqlMoney>(get_class());
        }
        inline app::SqlMoney__Boxed* box(app::SqlMoney value) {
            return il2cpp::box_value<app::SqlMoney__Boxed>(get_class(), value);
        }
        inline app::SqlMoney__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlMoney__Array>(get_class(), size);
        }
        inline app::SqlMoney__Array* create_array(const std::vector<app::SqlMoney>& items) {
            return il2cpp::array_new<app::SqlMoney__Array>(get_class(), items);
        }
    } // namespace SqlMoney
} // namespace app::classes::types
