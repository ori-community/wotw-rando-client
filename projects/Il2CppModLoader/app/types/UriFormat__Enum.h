#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriFormat__Enum {
        namespace {
            inline app::UriFormat__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UriFormat__Enum__Class** type_info = &type_info_ref;
        inline app::UriFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriFormat__Enum__Class>(type_info, "System", "UriFormat");
        }
        inline app::UriFormat__Enum* create() {
            return il2cpp::create_object<app::UriFormat__Enum>(get_class());
        }
    } // namespace UriFormat__Enum
} // namespace app::classes::types
