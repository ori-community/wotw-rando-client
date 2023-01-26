#pragma once
#include <Modloader/app/structs/SqlStringStorage.h>
#include <Modloader/app/structs/SqlStringStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlStringStorage {
        inline app::SqlStringStorage__Class** type_info() {
            static app::SqlStringStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlStringStorage__Class**)(modloader::win::memory::resolve_rva(0x04725D10));
            }
            return cache;
        }
        inline app::SqlStringStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlStringStorage__Class>(type_info(), "System.Data.Common", "SqlStringStorage");
        }
        inline app::SqlStringStorage* create() {
            return il2cpp::create_object<app::SqlStringStorage>(get_class());
        }
    } // namespace SqlStringStorage
} // namespace app::classes::types
