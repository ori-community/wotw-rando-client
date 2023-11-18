#pragma once
#include <Modloader/app/structs/ArgInfoType__Enum.h>
#include <Modloader/app/structs/ArgInfoType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArgInfoType__Enum {
        inline app::ArgInfoType__Enum__Class** type_info() {
            static app::ArgInfoType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArgInfoType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArgInfoType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ArgInfoType__Enum__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ArgInfoType");
        }
        inline app::ArgInfoType__Enum* create() {
            return il2cpp::create_object<app::ArgInfoType__Enum>(get_class());
        }
    } // namespace ArgInfoType__Enum
} // namespace app::classes::types
