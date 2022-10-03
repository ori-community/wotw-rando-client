#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblContextHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblContextHandle__Class** type_info;
        inline app::XblContextHandle__Class* get_class() {
            return il2cpp::get_class<app::XblContextHandle__Class>(type_info, "XGamingRuntime", "XblContextHandle");
        }
        inline app::XblContextHandle* create() {
            return il2cpp::create_object<app::XblContextHandle>(get_class());
        }
    } // namespace XblContextHandle
} // namespace app::classes::types
