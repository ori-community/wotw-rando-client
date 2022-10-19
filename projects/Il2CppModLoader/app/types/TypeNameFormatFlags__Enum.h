#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeNameFormatFlags__Enum {
        namespace {
            inline app::TypeNameFormatFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TypeNameFormatFlags__Enum__Class** type_info = &type_info_ref;
        inline app::TypeNameFormatFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameFormatFlags__Enum__Class>(type_info, "System", "TypeNameFormatFlags");
        }
        inline app::TypeNameFormatFlags__Enum* create() {
            return il2cpp::create_object<app::TypeNameFormatFlags__Enum>(get_class());
        }
    } // namespace TypeNameFormatFlags__Enum
} // namespace app::classes::types
