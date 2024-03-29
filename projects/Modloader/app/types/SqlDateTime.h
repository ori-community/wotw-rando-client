#pragma once
#include <Modloader/app/structs/SqlDateTime.h>
#include <Modloader/app/structs/SqlDateTime__Array.h>
#include <Modloader/app/structs/SqlDateTime__Boxed.h>
#include <Modloader/app/structs/SqlDateTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDateTime {
        inline app::SqlDateTime__Class** type_info() {
            static app::SqlDateTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDateTime__Class**)(modloader::win::memory::resolve_rva(0x04739CB0));
            }
            return cache;
        }
        inline app::SqlDateTime__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTime__Class>(type_info(), "System.Data.SqlTypes", "SqlDateTime");
        }
        inline app::SqlDateTime* create() {
            return il2cpp::create_object<app::SqlDateTime>(get_class());
        }
        inline app::SqlDateTime__Boxed* box(app::SqlDateTime value) {
            return il2cpp::box_value<app::SqlDateTime__Boxed>(get_class(), value);
        }
        inline app::SqlDateTime__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlDateTime__Array>(get_class(), size);
        }
        inline app::SqlDateTime__Array* create_array(const std::vector<app::SqlDateTime>& items) {
            return il2cpp::array_new<app::SqlDateTime__Array>(get_class(), items);
        }
    } // namespace SqlDateTime
} // namespace app::classes::types
