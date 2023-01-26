#pragma once
#include <Modloader/app/structs/SqlString.h>
#include <Modloader/app/structs/SqlString__Array.h>
#include <Modloader/app/structs/SqlString__Boxed.h>
#include <Modloader/app/structs/SqlString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlString {
        inline app::SqlString__Class** type_info() {
            static app::SqlString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlString__Class**)(modloader::win::memory::resolve_rva(0x0477AE58));
            }
            return cache;
        }
        inline app::SqlString__Class* get_class() {
            return il2cpp::get_class<app::SqlString__Class>(type_info(), "System.Data.SqlTypes", "SqlString");
        }
        inline app::SqlString* create() {
            return il2cpp::create_object<app::SqlString>(get_class());
        }
        inline app::SqlString__Boxed* box(app::SqlString value) {
            return il2cpp::box_value<app::SqlString__Boxed>(get_class(), value);
        }
        inline app::SqlString__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlString__Array>(get_class(), size);
        }
        inline app::SqlString__Array* create_array(const std::vector<app::SqlString>& items) {
            return il2cpp::array_new<app::SqlString__Array>(get_class(), items);
        }
    } // namespace SqlString
} // namespace app::classes::types
