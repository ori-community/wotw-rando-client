#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EFailureType__Enum {
        namespace {
            app::EFailureType__Enum__Class* type_info_ref = nullptr;
        }
        app::EFailureType__Enum__Class** type_info = &type_info_ref;
        inline app::EFailureType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EFailureType__Enum__Class>(type_info, "Steamworks", "EFailureType");
        }
        inline app::EFailureType__Enum* create() {
            return il2cpp::create_object<app::EFailureType__Enum>(get_class());
        }
    } // namespace EFailureType__Enum
} // namespace app::classes::types
