#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringSplitOptions__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringSplitOptions__Enum__Class** type_info;
        inline app::StringSplitOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringSplitOptions__Enum__Class>(type_info, "System", "StringSplitOptions");
        }
        inline app::StringSplitOptions__Enum* create() {
            return il2cpp::create_object<app::StringSplitOptions__Enum>(get_class());
        }
    } // namespace StringSplitOptions__Enum
} // namespace app::classes::types
