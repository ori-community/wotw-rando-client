#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataProviderID__Enum {
        namespace {
            inline app::DataProviderID__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DataProviderID__Enum__Class** type_info = &type_info_ref;
        inline app::DataProviderID__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataProviderID__Enum__Class>(type_info, "", "DataProviderID");
        }
        inline app::DataProviderID__Enum* create() {
            return il2cpp::create_object<app::DataProviderID__Enum>(get_class());
        }
    } // namespace DataProviderID__Enum
} // namespace app::classes::types
