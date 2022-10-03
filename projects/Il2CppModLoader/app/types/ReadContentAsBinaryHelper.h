#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadContentAsBinaryHelper {
        namespace {
            app::ReadContentAsBinaryHelper__Class* type_info_ref = nullptr;
        }
        app::ReadContentAsBinaryHelper__Class** type_info = &type_info_ref;
        inline app::ReadContentAsBinaryHelper__Class* get_class() {
            return il2cpp::get_class<app::ReadContentAsBinaryHelper__Class>(type_info, "System.Xml", "ReadContentAsBinaryHelper");
        }
        inline app::ReadContentAsBinaryHelper* create() {
            return il2cpp::create_object<app::ReadContentAsBinaryHelper>(get_class());
        }
    } // namespace ReadContentAsBinaryHelper
} // namespace app::classes::types
