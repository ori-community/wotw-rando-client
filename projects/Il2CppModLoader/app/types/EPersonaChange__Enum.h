#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EPersonaChange__Enum {
        namespace {
            inline app::EPersonaChange__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EPersonaChange__Enum__Class** type_info = &type_info_ref;
        inline app::EPersonaChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPersonaChange__Enum__Class>(type_info, "Steamworks", "EPersonaChange");
        }
        inline app::EPersonaChange__Enum* create() {
            return il2cpp::create_object<app::EPersonaChange__Enum>(get_class());
        }
    } // namespace EPersonaChange__Enum
} // namespace app::classes::types
