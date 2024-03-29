#pragma once
#include <Modloader/app/structs/SqlBinary.h>
#include <Modloader/app/structs/SqlBinary__Array.h>
#include <Modloader/app/structs/SqlBinary__Boxed.h>
#include <Modloader/app/structs/SqlBinary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlBinary {
        inline app::SqlBinary__Class** type_info() {
            static app::SqlBinary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlBinary__Class**)(modloader::win::memory::resolve_rva(0x047881A8));
            }
            return cache;
        }
        inline app::SqlBinary__Class* get_class() {
            return il2cpp::get_class<app::SqlBinary__Class>(type_info(), "System.Data.SqlTypes", "SqlBinary");
        }
        inline app::SqlBinary* create() {
            return il2cpp::create_object<app::SqlBinary>(get_class());
        }
        inline app::SqlBinary__Boxed* box(app::SqlBinary value) {
            return il2cpp::box_value<app::SqlBinary__Boxed>(get_class(), value);
        }
        inline app::SqlBinary__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlBinary__Array>(get_class(), size);
        }
        inline app::SqlBinary__Array* create_array(const std::vector<app::SqlBinary>& items) {
            return il2cpp::array_new<app::SqlBinary__Array>(get_class(), items);
        }
    } // namespace SqlBinary
} // namespace app::classes::types
