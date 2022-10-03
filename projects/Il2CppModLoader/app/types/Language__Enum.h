#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Language__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Language__Enum__Class** type_info;
        inline app::Language__Enum__Class* get_class() {
            return il2cpp::get_class<app::Language__Enum__Class>(type_info, "", "Language");
        }
        inline app::Language__Enum* create() {
            return il2cpp::create_object<app::Language__Enum>(get_class());
        }
    } // namespace Language__Enum
} // namespace app::classes::types
