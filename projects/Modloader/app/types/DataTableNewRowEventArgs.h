#pragma once
#include <Modloader/app/structs/DataTableNewRowEventArgs.h>
#include <Modloader/app/structs/DataTableNewRowEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableNewRowEventArgs {
        inline app::DataTableNewRowEventArgs__Class** type_info() {
            static app::DataTableNewRowEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataTableNewRowEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04770310));
            }
            return cache;
        }
        inline app::DataTableNewRowEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableNewRowEventArgs__Class>(type_info(), "System.Data", "DataTableNewRowEventArgs");
        }
        inline app::DataTableNewRowEventArgs* create() {
            return il2cpp::create_object<app::DataTableNewRowEventArgs>(get_class());
        }
    } // namespace DataTableNewRowEventArgs
} // namespace app::classes::types
