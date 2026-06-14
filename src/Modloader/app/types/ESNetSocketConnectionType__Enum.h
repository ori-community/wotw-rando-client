#pragma once
#include <Modloader/app/structs/ESNetSocketConnectionType__Enum.h>
#include <Modloader/app/structs/ESNetSocketConnectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ESNetSocketConnectionType__Enum {
        inline app::ESNetSocketConnectionType__Enum__Class** type_info() {
            static app::ESNetSocketConnectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ESNetSocketConnectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ESNetSocketConnectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESNetSocketConnectionType__Enum__Class>(type_info(), "Steamworks", "ESNetSocketConnectionType");
        }
        inline app::ESNetSocketConnectionType__Enum* create() {
            return il2cpp::create_object<app::ESNetSocketConnectionType__Enum>(get_class());
        }
    } // namespace ESNetSocketConnectionType__Enum
} // namespace app::classes::types
