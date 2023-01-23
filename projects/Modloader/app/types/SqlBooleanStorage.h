#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlBooleanStorage__Class.h>
#include <Modloader/app/structs/SqlBooleanStorage.h>

namespace app::classes::types {
    namespace SqlBooleanStorage {
        inline app::SqlBooleanStorage__Class** type_info = (app::SqlBooleanStorage__Class**)(modloader::win::memory::resolve_rva(0x04739B78));
        inline app::SqlBooleanStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlBooleanStorage__Class>(type_info, "System.Data.Common", "SqlBooleanStorage");
        }
        inline app::SqlBooleanStorage* create() {
            return il2cpp::create_object<app::SqlBooleanStorage>(get_class());
        }
    } // namespace SqlBooleanStorage
} // namespace app::classes::types
