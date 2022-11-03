#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClassInterfaceType__Enum {
        namespace {
            inline app::ClassInterfaceType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ClassInterfaceType__Enum__Class** type_info = &type_info_ref;
        inline app::ClassInterfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClassInterfaceType__Enum__Class>(type_info, "System.Runtime.InteropServices", "ClassInterfaceType");
        }
        inline app::ClassInterfaceType__Enum* create() {
            return il2cpp::create_object<app::ClassInterfaceType__Enum>(get_class());
        }
    } // namespace ClassInterfaceType__Enum
} // namespace app::classes::types
