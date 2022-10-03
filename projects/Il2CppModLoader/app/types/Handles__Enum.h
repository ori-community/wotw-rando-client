#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Handles__Enum {
        namespace {
            app::Handles__Enum__Class* type_info_ref = nullptr;
        }
        app::Handles__Enum__Class** type_info = &type_info_ref;
        inline app::Handles__Enum__Class* get_class() {
            return il2cpp::get_class<app::Handles__Enum__Class>(type_info, "System", "Handles");
        }
        inline app::Handles__Enum* create() {
            return il2cpp::create_object<app::Handles__Enum>(get_class());
        }
    } // namespace Handles__Enum
} // namespace app::classes::types
