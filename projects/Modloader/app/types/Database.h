#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Database__Class.h>
#include <Modloader/app/structs/Database.h>
#include <Modloader/app/structs/DataBase__Class.h>
#include <Modloader/app/structs/DataBase.h>

namespace app::classes::types {
    namespace Database {
        inline app::Database__Class** type_info = (app::Database__Class**)(modloader::win::memory::resolve_rva(0x04779A90));
        inline app::Database__Class* get_class() {
            return il2cpp::get_class<app::Database__Class>(type_info, "Moon.Race", "Database");
        }
        inline app::Database* create() {
            return il2cpp::create_object<app::Database>(get_class());
        }
    } // namespace Database
} // namespace app::classes::types
#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
