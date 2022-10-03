#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SystemException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SystemException__Class** type_info;
        inline app::SystemException__Class* get_class() {
            return il2cpp::get_class<app::SystemException__Class>(type_info, "System", "SystemException");
        }
        inline app::SystemException* create() {
            return il2cpp::create_object<app::SystemException>(get_class());
        }
    } // namespace SystemException
} // namespace app::classes::types
