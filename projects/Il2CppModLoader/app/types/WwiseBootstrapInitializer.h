#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrapInitializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseBootstrapInitializer__Class** type_info;
        inline app::WwiseBootstrapInitializer__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrapInitializer__Class>(type_info, "", "WwiseBootstrapInitializer");
        }
        inline app::WwiseBootstrapInitializer* create() {
            return il2cpp::create_object<app::WwiseBootstrapInitializer>(get_class());
        }
    } // namespace WwiseBootstrapInitializer
} // namespace app::classes::types
