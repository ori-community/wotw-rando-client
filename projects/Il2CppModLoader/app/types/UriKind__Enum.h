#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriKind__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UriKind__Enum__Class** type_info;
        inline app::UriKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriKind__Enum__Class>(type_info, "System", "UriKind");
        }
        inline app::UriKind__Enum* create() {
            return il2cpp::create_object<app::UriKind__Enum>(get_class());
        }
    } // namespace UriKind__Enum
} // namespace app::classes::types
