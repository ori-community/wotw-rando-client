#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataObjectMethodType__Enum {
        namespace {
            inline app::DataObjectMethodType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DataObjectMethodType__Enum__Class** type_info = &type_info_ref;
        inline app::DataObjectMethodType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodType__Enum__Class>(type_info, "System.ComponentModel", "DataObjectMethodType");
        }
        inline app::DataObjectMethodType__Enum* create() {
            return il2cpp::create_object<app::DataObjectMethodType__Enum>(get_class());
        }
    } // namespace DataObjectMethodType__Enum
} // namespace app::classes::types
