#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMode__Enum {
        namespace {
            inline app::DebugMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DebugMode__Enum__Class** type_info = &type_info_ref;
        inline app::DebugMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DebugMode__Enum__Class>(type_info, "uWintab", "DebugMode");
        }
        inline app::DebugMode__Enum* create() {
            return il2cpp::create_object<app::DebugMode__Enum>(get_class());
        }
    } // namespace DebugMode__Enum
} // namespace app::classes::types
