#pragma once
#include <Modloader/app/structs/SqlInt16Storage.h>
#include <Modloader/app/structs/SqlInt16Storage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlInt16Storage {
        inline app::SqlInt16Storage__Class** type_info() {
            static app::SqlInt16Storage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlInt16Storage__Class**)(modloader::win::memory::resolve_rva(0x0476DF60));
            }
            return cache;
        }
        inline app::SqlInt16Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16Storage__Class>(type_info(), "System.Data.Common", "SqlInt16Storage");
        }
        inline app::SqlInt16Storage* create() {
            return il2cpp::create_object<app::SqlInt16Storage>(get_class());
        }
    } // namespace SqlInt16Storage
} // namespace app::classes::types
