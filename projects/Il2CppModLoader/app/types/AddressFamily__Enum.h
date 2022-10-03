#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddressFamily__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddressFamily__Enum__Class** type_info;
        inline app::AddressFamily__Enum__Class* get_class() {
            return il2cpp::get_class<app::AddressFamily__Enum__Class>(type_info, "System.Net.Sockets", "AddressFamily");
        }
        inline app::AddressFamily__Enum* create() {
            return il2cpp::create_object<app::AddressFamily__Enum>(get_class());
        }
    } // namespace AddressFamily__Enum
} // namespace app::classes::types
