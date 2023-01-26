#pragma once
#include <Modloader/app/structs/SqlBinaryStorage.h>
#include <Modloader/app/structs/SqlBinaryStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlBinaryStorage {
        inline app::SqlBinaryStorage__Class** type_info() {
            static app::SqlBinaryStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlBinaryStorage__Class**)(modloader::win::memory::resolve_rva(0x047393B8));
            }
            return cache;
        }
        inline app::SqlBinaryStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBinaryStorage__Class>(type_info(), "System.Data.Common", "SqlBinaryStorage");
        }
        inline app::SqlBinaryStorage* create() {
            return il2cpp::create_object<app::SqlBinaryStorage>(get_class());
        }
    } // namespace SqlBinaryStorage
} // namespace app::classes::types
