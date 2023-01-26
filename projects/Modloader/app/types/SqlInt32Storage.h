#pragma once
#include <Modloader/app/structs/SqlInt32Storage.h>
#include <Modloader/app/structs/SqlInt32Storage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlInt32Storage {
        inline app::SqlInt32Storage__Class** type_info() {
            static app::SqlInt32Storage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlInt32Storage__Class**)(modloader::win::memory::resolve_rva(0x04768FB0));
            }
            return cache;
        }
        inline app::SqlInt32Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32Storage__Class>(type_info(), "System.Data.Common", "SqlInt32Storage");
        }
        inline app::SqlInt32Storage* create() {
            return il2cpp::create_object<app::SqlInt32Storage>(get_class());
        }
    } // namespace SqlInt32Storage
} // namespace app::classes::types
