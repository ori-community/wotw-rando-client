#pragma once
#include <Modloader/app/structs/SqlByte.h>
#include <Modloader/app/structs/SqlByte__Array.h>
#include <Modloader/app/structs/SqlByte__Boxed.h>
#include <Modloader/app/structs/SqlByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlByte {
        inline app::SqlByte__Class** type_info() {
            static app::SqlByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlByte__Class**)(modloader::win::memory::resolve_rva(0x04724C28));
            }
            return cache;
        }
        inline app::SqlByte__Class* get_class() {
            return il2cpp::get_class<app::SqlByte__Class>(type_info(), "System.Data.SqlTypes", "SqlByte");
        }
        inline app::SqlByte* create() {
            return il2cpp::create_object<app::SqlByte>(get_class());
        }
        inline app::SqlByte__Boxed* box(app::SqlByte value) {
            return il2cpp::box_value<app::SqlByte__Boxed>(get_class(), value);
        }
        inline app::SqlByte__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlByte__Array>(get_class(), size);
        }
        inline app::SqlByte__Array* create_array(const std::vector<app::SqlByte>& items) {
            return il2cpp::array_new<app::SqlByte__Array>(get_class(), items);
        }
    } // namespace SqlByte
} // namespace app::classes::types
