#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventResetMode__Enum {
        namespace {
            app::EventResetMode__Enum__Class* type_info_ref = nullptr;
        }
        app::EventResetMode__Enum__Class** type_info = &type_info_ref;
        inline app::EventResetMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventResetMode__Enum__Class>(type_info, "System.Threading", "EventResetMode");
        }
        inline app::EventResetMode__Enum* create() {
            return il2cpp::create_object<app::EventResetMode__Enum>(get_class());
        }
    } // namespace EventResetMode__Enum
} // namespace app::classes::types
