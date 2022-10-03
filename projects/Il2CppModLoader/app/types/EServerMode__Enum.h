#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EServerMode__Enum {
        namespace {
            app::EServerMode__Enum__Class* type_info_ref = nullptr;
        }
        app::EServerMode__Enum__Class** type_info = &type_info_ref;
        inline app::EServerMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EServerMode__Enum__Class>(type_info, "Steamworks", "EServerMode");
        }
        inline app::EServerMode__Enum* create() {
            return il2cpp::create_object<app::EServerMode__Enum>(get_class());
        }
    } // namespace EServerMode__Enum
} // namespace app::classes::types
