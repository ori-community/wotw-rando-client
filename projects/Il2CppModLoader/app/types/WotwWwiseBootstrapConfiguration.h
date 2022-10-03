#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwWwiseBootstrapConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WotwWwiseBootstrapConfiguration__Class** type_info;
        inline app::WotwWwiseBootstrapConfiguration__Class* get_class() {
            return il2cpp::get_class<app::WotwWwiseBootstrapConfiguration__Class>(type_info, "", "WotwWwiseBootstrapConfiguration");
        }
        inline app::WotwWwiseBootstrapConfiguration* create() {
            return il2cpp::create_object<app::WotwWwiseBootstrapConfiguration>(get_class());
        }
    } // namespace WotwWwiseBootstrapConfiguration
} // namespace app::classes::types
