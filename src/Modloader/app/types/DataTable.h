#pragma once
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/DataTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTable {
        inline app::DataTable__Class** type_info() {
            static app::DataTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTable__Class**)(modloader::win::memory::resolve_rva(0x04734058));
            }
            return cache;
        }
        inline app::DataTable__Class* get_class() {
            return il2cpp::get_class<app::DataTable__Class>(type_info(), "System.Data", "DataTable");
        }
        inline app::DataTable* create() {
            return il2cpp::create_object<app::DataTable>(get_class());
        }
        inline app::DataTable__Array* create_array(int size) {
            return il2cpp::array_new<app::DataTable__Array>(get_class(), size);
        }
        inline app::DataTable__Array* create_array(const std::vector<app::DataTable*>& items) {
            return il2cpp::array_new<app::DataTable__Array>(get_class(), items);
        }
    } // namespace DataTable
} // namespace app::classes::types
