#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransportType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransportType__Enum__Class** type_info;
        inline app::TransportType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransportType__Enum__Class>(type_info, "System.Net", "TransportType");
        }
        inline app::TransportType__Enum* create() {
            return il2cpp::create_object<app::TransportType__Enum>(get_class());
        }
    } // namespace TransportType__Enum
} // namespace app::classes::types
