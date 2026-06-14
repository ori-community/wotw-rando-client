#pragma once
#include <Modloader/app/structs/AkConnectionType__Enum.h>
#include <Modloader/app/structs/AkConnectionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkConnectionType__Enum {
        inline app::AkConnectionType__Enum__Class** type_info() {
            static app::AkConnectionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkConnectionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkConnectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkConnectionType__Enum__Class>(type_info(), "", "AkConnectionType");
        }
        inline app::AkConnectionType__Enum* create() {
            return il2cpp::create_object<app::AkConnectionType__Enum>(get_class());
        }
    } // namespace AkConnectionType__Enum
} // namespace app::classes::types
