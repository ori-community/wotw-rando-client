#pragma once
#include <Modloader/app/structs/SqlDateTimeStorage.h>
#include <Modloader/app/structs/SqlDateTimeStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDateTimeStorage {
        inline app::SqlDateTimeStorage__Class** type_info() {
            static app::SqlDateTimeStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDateTimeStorage__Class**)(modloader::win::memory::resolve_rva(0x04759CF8));
            }
            return cache;
        }
        inline app::SqlDateTimeStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTimeStorage__Class>(type_info(), "System.Data.Common", "SqlDateTimeStorage");
        }
        inline app::SqlDateTimeStorage* create() {
            return il2cpp::create_object<app::SqlDateTimeStorage>(get_class());
        }
    } // namespace SqlDateTimeStorage
} // namespace app::classes::types
