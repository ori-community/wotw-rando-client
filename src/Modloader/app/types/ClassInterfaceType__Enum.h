#pragma once
#include <Modloader/app/structs/ClassInterfaceType__Enum.h>
#include <Modloader/app/structs/ClassInterfaceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClassInterfaceType__Enum {
        inline app::ClassInterfaceType__Enum__Class** type_info() {
            static app::ClassInterfaceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClassInterfaceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClassInterfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClassInterfaceType__Enum__Class>(type_info(), "System.Runtime.InteropServices", "ClassInterfaceType");
        }
        inline app::ClassInterfaceType__Enum* create() {
            return il2cpp::create_object<app::ClassInterfaceType__Enum>(get_class());
        }
    } // namespace ClassInterfaceType__Enum
} // namespace app::classes::types
