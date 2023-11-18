#pragma once
#include <Modloader/app/structs/DataProviderID__Enum.h>
#include <Modloader/app/structs/DataProviderID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProviderID__Enum {
        inline app::DataProviderID__Enum__Class** type_info() {
            static app::DataProviderID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataProviderID__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataProviderID__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataProviderID__Enum__Class>(type_info(), "", "DataProviderID");
        }
        inline app::DataProviderID__Enum* create() {
            return il2cpp::create_object<app::DataProviderID__Enum>(get_class());
        }
    } // namespace DataProviderID__Enum
} // namespace app::classes::types
