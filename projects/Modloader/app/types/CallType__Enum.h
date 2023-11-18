#pragma once
#include <Modloader/app/structs/CallType__Enum.h>
#include <Modloader/app/structs/CallType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallType__Enum {
        inline app::CallType__Enum__Class** type_info() {
            static app::CallType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallType__Enum__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CallType");
        }
        inline app::CallType__Enum* create() {
            return il2cpp::create_object<app::CallType__Enum>(get_class());
        }
    } // namespace CallType__Enum
} // namespace app::classes::types
