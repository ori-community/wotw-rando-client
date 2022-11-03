#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlBoolean {
        inline app::SqlBoolean__Class** type_info = (app::SqlBoolean__Class**)(modloader::win::memory::resolve_rva(0x04782380));
        inline app::SqlBoolean__Class* get_class() {
            return il2cpp::get_class<app::SqlBoolean__Class>(type_info, "System.Data.SqlTypes", "SqlBoolean");
        }
        inline app::SqlBoolean* create() {
            return il2cpp::create_object<app::SqlBoolean>(get_class());
        }
        inline app::SqlBoolean__Boxed* box(app::SqlBoolean value) {
            return il2cpp::box_value<app::SqlBoolean__Boxed>(get_class(), value);
        }
        inline app::SqlBoolean__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlBoolean__Array>(get_class(), size);
        }
        inline app::SqlBoolean__Array* create_array(const std::vector<app::SqlBoolean>& items) {
            return il2cpp::array_new<app::SqlBoolean__Array>(get_class(), items);
        }
    } // namespace SqlBoolean
} // namespace app::classes::types
