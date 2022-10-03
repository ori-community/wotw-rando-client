#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICredentials__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICredentials__Array__Class** type_info;
        inline app::ICredentials__Array__Class* get_class() {
            return il2cpp::get_class<app::ICredentials__Array__Class>(type_info, "System.Net", "ICredentials[]");
        }
        inline app::ICredentials__Array* create() {
            return il2cpp::create_object<app::ICredentials__Array>(get_class());
        }
    } // namespace ICredentials__Array
} // namespace app::classes::types
