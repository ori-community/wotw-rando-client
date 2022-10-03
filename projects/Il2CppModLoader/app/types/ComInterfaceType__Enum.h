#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComInterfaceType__Enum {
        namespace {
            app::ComInterfaceType__Enum__Class* type_info_ref = nullptr;
        }
        app::ComInterfaceType__Enum__Class** type_info = &type_info_ref;
        inline app::ComInterfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComInterfaceType__Enum__Class>(type_info, "System.Runtime.InteropServices", "ComInterfaceType");
        }
        inline app::ComInterfaceType__Enum* create() {
            return il2cpp::create_object<app::ComInterfaceType__Enum>(get_class());
        }
    } // namespace ComInterfaceType__Enum
} // namespace app::classes::types
