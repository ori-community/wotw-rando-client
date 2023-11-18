#pragma once
#include <Modloader/app/structs/EP2PSessionError__Enum.h>
#include <Modloader/app/structs/EP2PSessionError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EP2PSessionError__Enum {
        inline app::EP2PSessionError__Enum__Class** type_info() {
            static app::EP2PSessionError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EP2PSessionError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EP2PSessionError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EP2PSessionError__Enum__Class>(type_info(), "Steamworks", "EP2PSessionError");
        }
        inline app::EP2PSessionError__Enum* create() {
            return il2cpp::create_object<app::EP2PSessionError__Enum>(get_class());
        }
    } // namespace EP2PSessionError__Enum
} // namespace app::classes::types
