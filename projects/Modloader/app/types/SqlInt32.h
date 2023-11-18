#pragma once
#include <Modloader/app/structs/SqlInt32.h>
#include <Modloader/app/structs/SqlInt32__Array.h>
#include <Modloader/app/structs/SqlInt32__Boxed.h>
#include <Modloader/app/structs/SqlInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlInt32 {
        inline app::SqlInt32__Class** type_info() {
            static app::SqlInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlInt32__Class**)(modloader::win::memory::resolve_rva(0x04784FF0));
            }
            return cache;
        }
        inline app::SqlInt32__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32__Class>(type_info(), "System.Data.SqlTypes", "SqlInt32");
        }
        inline app::SqlInt32* create() {
            return il2cpp::create_object<app::SqlInt32>(get_class());
        }
        inline app::SqlInt32__Boxed* box(app::SqlInt32 value) {
            return il2cpp::box_value<app::SqlInt32__Boxed>(get_class(), value);
        }
        inline app::SqlInt32__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlInt32__Array>(get_class(), size);
        }
        inline app::SqlInt32__Array* create_array(const std::vector<app::SqlInt32>& items) {
            return il2cpp::array_new<app::SqlInt32__Array>(get_class(), items);
        }
    } // namespace SqlInt32
} // namespace app::classes::types
