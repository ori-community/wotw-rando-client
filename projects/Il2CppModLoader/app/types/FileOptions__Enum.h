#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileOptions__Enum {
        namespace {
            inline app::FileOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FileOptions__Enum__Class** type_info = &type_info_ref;
        inline app::FileOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileOptions__Enum__Class>(type_info, "System.IO", "FileOptions");
        }
        inline app::FileOptions__Enum* create() {
            return il2cpp::create_object<app::FileOptions__Enum>(get_class());
        }
    } // namespace FileOptions__Enum
} // namespace app::classes::types
