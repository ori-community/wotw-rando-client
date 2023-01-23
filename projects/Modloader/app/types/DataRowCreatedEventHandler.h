#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataRowCreatedEventHandler__Class.h>
#include <Modloader/app/structs/DataRowCreatedEventHandler.h>

namespace app::classes::types {
    namespace DataRowCreatedEventHandler {
        namespace {
            inline app::DataRowCreatedEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::DataRowCreatedEventHandler__Class** type_info = &type_info_ref;
        inline app::DataRowCreatedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataRowCreatedEventHandler__Class>(type_info, "System.Data", "DataRowCreatedEventHandler");
        }
        inline app::DataRowCreatedEventHandler* create() {
            return il2cpp::create_object<app::DataRowCreatedEventHandler>(get_class());
        }
    } // namespace DataRowCreatedEventHandler
} // namespace app::classes::types
