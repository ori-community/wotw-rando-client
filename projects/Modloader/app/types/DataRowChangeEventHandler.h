#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataRowChangeEventHandler__Class.h>
#include <Modloader/app/structs/DataRowChangeEventHandler.h>

namespace app::classes::types {
    namespace DataRowChangeEventHandler {
        namespace {
            inline app::DataRowChangeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::DataRowChangeEventHandler__Class** type_info = &type_info_ref;
        inline app::DataRowChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataRowChangeEventHandler__Class>(type_info, "System.Data", "DataRowChangeEventHandler");
        }
        inline app::DataRowChangeEventHandler* create() {
            return il2cpp::create_object<app::DataRowChangeEventHandler>(get_class());
        }
    } // namespace DataRowChangeEventHandler
} // namespace app::classes::types
