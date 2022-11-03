#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataColumnChangeEventHandler {
        namespace {
            inline app::DataColumnChangeEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::DataColumnChangeEventHandler__Class** type_info = &type_info_ref;
        inline app::DataColumnChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataColumnChangeEventHandler__Class>(type_info, "System.Data", "DataColumnChangeEventHandler");
        }
        inline app::DataColumnChangeEventHandler* create() {
            return il2cpp::create_object<app::DataColumnChangeEventHandler>(get_class());
        }
    } // namespace DataColumnChangeEventHandler
} // namespace app::classes::types
