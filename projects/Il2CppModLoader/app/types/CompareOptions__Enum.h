#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompareOptions__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompareOptions__Enum__Class** type_info;
        inline app::CompareOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompareOptions__Enum__Class>(type_info, "System.Globalization", "CompareOptions");
        }
        inline app::CompareOptions__Enum* create() {
            return il2cpp::create_object<app::CompareOptions__Enum>(get_class());
        }
    } // namespace CompareOptions__Enum
} // namespace app::classes::types
