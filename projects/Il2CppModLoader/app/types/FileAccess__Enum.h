#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileAccess__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileAccess__Enum__Class** type_info;
        inline app::FileAccess__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileAccess__Enum__Class>(type_info, "System.IO", "FileAccess");
        }
        inline app::FileAccess__Enum* create() {
            return il2cpp::create_object<app::FileAccess__Enum>(get_class());
        }
    } // namespace FileAccess__Enum
} // namespace app::classes::types
