#pragma once
#include <Modloader/app/structs/DataColumnChangeEventArgs.h>
#include <Modloader/app/structs/DataColumnChangeEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataColumnChangeEventArgs {
        inline app::DataColumnChangeEventArgs__Class** type_info() {
            static app::DataColumnChangeEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataColumnChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047868B8));
            }
            return cache;
        }
        inline app::DataColumnChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataColumnChangeEventArgs__Class>(type_info(), "System.Data", "DataColumnChangeEventArgs");
        }
        inline app::DataColumnChangeEventArgs* create() {
            return il2cpp::create_object<app::DataColumnChangeEventArgs>(get_class());
        }
    } // namespace DataColumnChangeEventArgs
} // namespace app::classes::types
