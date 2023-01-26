#pragma once
#include <Modloader/app/structs/Database.h>
#include <Modloader/app/structs/Database__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Database {
        inline app::Database__Class** type_info() {
            static app::Database__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Database__Class**)(modloader::win::memory::resolve_rva(0x04779A90));
            }
            return cache;
        }
        inline app::Database__Class* get_class() {
            return il2cpp::get_class<app::Database__Class>(type_info(), "Moon.Race", "Database");
        }
        inline app::Database* create() {
            return il2cpp::create_object<app::Database>(get_class());
        }
    } // namespace Database
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/DataBase.h>
#include <Modloader/app/structs/DataBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataBase {
        inline app::DataBase__Class** type_info() {
            static app::DataBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataBase__Class* get_class() {
            return il2cpp::get_class<app::DataBase__Class>(type_info(), "Moon.Telemetry", "DataBase");
        }
        inline app::DataBase* create() {
            return il2cpp::create_object<app::DataBase>(get_class());
        }
    } // namespace DataBase
} // namespace app::classes::types
