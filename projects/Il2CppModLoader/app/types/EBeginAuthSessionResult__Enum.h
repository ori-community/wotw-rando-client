#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EBeginAuthSessionResult__Enum {
        namespace {
            app::EBeginAuthSessionResult__Enum__Class* type_info_ref = nullptr;
        }
        app::EBeginAuthSessionResult__Enum__Class** type_info = &type_info_ref;
        inline app::EBeginAuthSessionResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EBeginAuthSessionResult__Enum__Class>(type_info, "Steamworks", "EBeginAuthSessionResult");
        }
        inline app::EBeginAuthSessionResult__Enum* create() {
            return il2cpp::create_object<app::EBeginAuthSessionResult__Enum>(get_class());
        }
    } // namespace EBeginAuthSessionResult__Enum
} // namespace app::classes::types
