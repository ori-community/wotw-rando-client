#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tokens__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tokens__Enum__Class** type_info;
        inline app::Tokens__Enum__Class* get_class() {
            return il2cpp::get_class<app::Tokens__Enum__Class>(type_info, "System.Data", "Tokens");
        }
        inline app::Tokens__Enum* create() {
            return il2cpp::create_object<app::Tokens__Enum>(get_class());
        }
    } // namespace Tokens__Enum
} // namespace app::classes::types
