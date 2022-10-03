#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgInfoType__Enum {
        namespace {
            app::ArgInfoType__Enum__Class* type_info_ref = nullptr;
        }
        app::ArgInfoType__Enum__Class** type_info = &type_info_ref;
        inline app::ArgInfoType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ArgInfoType__Enum__Class>(type_info, "System.Runtime.Remoting.Messaging", "ArgInfoType");
        }
        inline app::ArgInfoType__Enum* create() {
            return il2cpp::create_object<app::ArgInfoType__Enum>(get_class());
        }
    } // namespace ArgInfoType__Enum
} // namespace app::classes::types
