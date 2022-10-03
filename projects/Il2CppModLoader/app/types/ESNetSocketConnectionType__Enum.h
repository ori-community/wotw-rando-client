#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESNetSocketConnectionType__Enum {
        namespace {
            app::ESNetSocketConnectionType__Enum__Class* type_info_ref = nullptr;
        }
        app::ESNetSocketConnectionType__Enum__Class** type_info = &type_info_ref;
        inline app::ESNetSocketConnectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESNetSocketConnectionType__Enum__Class>(type_info, "Steamworks", "ESNetSocketConnectionType");
        }
        inline app::ESNetSocketConnectionType__Enum* create() {
            return il2cpp::create_object<app::ESNetSocketConnectionType__Enum>(get_class());
        }
    } // namespace ESNetSocketConnectionType__Enum
} // namespace app::classes::types
