#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EPersonaState__Enum {
        namespace {
            app::EPersonaState__Enum__Class* type_info_ref = nullptr;
        }
        app::EPersonaState__Enum__Class** type_info = &type_info_ref;
        inline app::EPersonaState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPersonaState__Enum__Class>(type_info, "Steamworks", "EPersonaState");
        }
        inline app::EPersonaState__Enum* create() {
            return il2cpp::create_object<app::EPersonaState__Enum>(get_class());
        }
    } // namespace EPersonaState__Enum
} // namespace app::classes::types
