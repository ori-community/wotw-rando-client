#pragma once
#include <Modloader/app/structs/SqlDecimalStorage.h>
#include <Modloader/app/structs/SqlDecimalStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDecimalStorage {
        inline app::SqlDecimalStorage__Class** type_info() {
            static app::SqlDecimalStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDecimalStorage__Class**)(modloader::win::memory::resolve_rva(0x047400A0));
            }
            return cache;
        }
        inline app::SqlDecimalStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimalStorage__Class>(type_info(), "System.Data.Common", "SqlDecimalStorage");
        }
        inline app::SqlDecimalStorage* create() {
            return il2cpp::create_object<app::SqlDecimalStorage>(get_class());
        }
    } // namespace SqlDecimalStorage
} // namespace app::classes::types
