#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileShare__Enum {
        namespace {
            inline app::FileShare__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FileShare__Enum__Class** type_info = &type_info_ref;
        inline app::FileShare__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileShare__Enum__Class>(type_info, "System.IO", "FileShare");
        }
        inline app::FileShare__Enum* create() {
            return il2cpp::create_object<app::FileShare__Enum>(get_class());
        }
    } // namespace FileShare__Enum
} // namespace app::classes::types
