#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataObjectMethodType__Enum {
        namespace {
            app::DataObjectMethodType__Enum__Class* type_info_ref = nullptr;
        }
        app::DataObjectMethodType__Enum__Class** type_info = &type_info_ref;
        inline app::DataObjectMethodType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodType__Enum__Class>(type_info, "System.ComponentModel", "DataObjectMethodType");
        }
        inline app::DataObjectMethodType__Enum* create() {
            return il2cpp::create_object<app::DataObjectMethodType__Enum>(get_class());
        }
    } // namespace DataObjectMethodType__Enum
} // namespace app::classes::types
