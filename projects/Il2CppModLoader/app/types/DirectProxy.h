#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DirectProxy__Class** type_info;
        inline app::DirectProxy__Class* get_class() {
            return il2cpp::get_class<app::DirectProxy__Class>(type_info, "System.Net", "DirectProxy");
        }
        inline app::DirectProxy* create() {
            return il2cpp::create_object<app::DirectProxy>(get_class());
        }
    } // namespace DirectProxy
} // namespace app::classes::types
