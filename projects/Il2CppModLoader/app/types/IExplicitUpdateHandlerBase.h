#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandlerBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExplicitUpdateHandlerBase__Class** type_info;
        inline app::IExplicitUpdateHandlerBase__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandlerBase__Class>(type_info, "Moon", "IExplicitUpdateHandlerBase");
        }
        inline app::IExplicitUpdateHandlerBase* create() {
            return il2cpp::create_object<app::IExplicitUpdateHandlerBase>(get_class());
        }
    } // namespace IExplicitUpdateHandlerBase
} // namespace app::classes::types
