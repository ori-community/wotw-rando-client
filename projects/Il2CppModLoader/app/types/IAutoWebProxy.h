#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAutoWebProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAutoWebProxy__Class** type_info;
        inline app::IAutoWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IAutoWebProxy__Class>(type_info, "System.Net", "IAutoWebProxy");
        }
        inline app::IAutoWebProxy* create() {
            return il2cpp::create_object<app::IAutoWebProxy>(get_class());
        }
    } // namespace IAutoWebProxy
} // namespace app::classes::types
