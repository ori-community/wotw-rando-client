#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProviderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProviderData__Class** type_info;
        inline app::ProviderData__Class* get_class() {
            return il2cpp::get_class<app::ProviderData__Class>(type_info, "System.Runtime.Remoting", "ProviderData");
        }
        inline app::ProviderData* create() {
            return il2cpp::create_object<app::ProviderData>(get_class());
        }
    } // namespace ProviderData
} // namespace app::classes::types
