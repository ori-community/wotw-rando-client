#pragma once
#include <Modloader/app/structs/DataTableClearEventArgs.h>
#include <Modloader/app/structs/DataTableClearEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableClearEventArgs {
        inline app::DataTableClearEventArgs__Class** type_info() {
            static app::DataTableClearEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTableClearEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472E7C8));
            }
            return cache;
        }
        inline app::DataTableClearEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventArgs__Class>(type_info(), "System.Data", "DataTableClearEventArgs");
        }
        inline app::DataTableClearEventArgs* create() {
            return il2cpp::create_object<app::DataTableClearEventArgs>(get_class());
        }
    } // namespace DataTableClearEventArgs
} // namespace app::classes::types
