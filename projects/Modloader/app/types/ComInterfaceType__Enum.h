#pragma once
#include <Modloader/app/structs/ComInterfaceType__Enum.h>
#include <Modloader/app/structs/ComInterfaceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComInterfaceType__Enum {
        inline app::ComInterfaceType__Enum__Class** type_info() {
            static app::ComInterfaceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComInterfaceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComInterfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComInterfaceType__Enum__Class>(type_info(), "System.Runtime.InteropServices", "ComInterfaceType");
        }
        inline app::ComInterfaceType__Enum* create() {
            return il2cpp::create_object<app::ComInterfaceType__Enum>(get_class());
        }
    } // namespace ComInterfaceType__Enum
} // namespace app::classes::types
