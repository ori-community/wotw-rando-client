#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlBytesStorage__Class.h>
#include <Modloader/app/structs/SqlBytesStorage.h>

namespace app::classes::types {
    namespace SqlBytesStorage {
        inline app::SqlBytesStorage__Class** type_info = (app::SqlBytesStorage__Class**)(modloader::win::memory::resolve_rva(0x047508F8));
        inline app::SqlBytesStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBytesStorage__Class>(type_info, "System.Data.Common", "SqlBytesStorage");
        }
        inline app::SqlBytesStorage* create() {
            return il2cpp::create_object<app::SqlBytesStorage>(get_class());
        }
    } // namespace SqlBytesStorage
} // namespace app::classes::types
