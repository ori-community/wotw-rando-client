#pragma once
#include <Modloader/app/structs/ColumnTypeConverter.h>
#include <Modloader/app/structs/ColumnTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColumnTypeConverter {
        inline app::ColumnTypeConverter__Class** type_info() {
            static app::ColumnTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColumnTypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04718D38));
            }
            return cache;
        }
        inline app::ColumnTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::ColumnTypeConverter__Class>(type_info(), "System.Data", "ColumnTypeConverter");
        }
        inline app::ColumnTypeConverter* create() {
            return il2cpp::create_object<app::ColumnTypeConverter>(get_class());
        }
    } // namespace ColumnTypeConverter
} // namespace app::classes::types
