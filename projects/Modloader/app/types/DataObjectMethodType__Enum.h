#pragma once
#include <Modloader/app/structs/DataObjectMethodType__Enum.h>
#include <Modloader/app/structs/DataObjectMethodType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataObjectMethodType__Enum {
        inline app::DataObjectMethodType__Enum__Class** type_info() {
            static app::DataObjectMethodType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataObjectMethodType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataObjectMethodType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodType__Enum__Class>(type_info(), "System.ComponentModel", "DataObjectMethodType");
        }
        inline app::DataObjectMethodType__Enum* create() {
            return il2cpp::create_object<app::DataObjectMethodType__Enum>(get_class());
        }
    } // namespace DataObjectMethodType__Enum
} // namespace app::classes::types
