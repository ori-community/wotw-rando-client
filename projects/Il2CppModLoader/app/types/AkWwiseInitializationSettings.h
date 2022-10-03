#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkWwiseInitializationSettings__Class** type_info;
        inline app::AkWwiseInitializationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseInitializationSettings__Class>(type_info, "", "AkWwiseInitializationSettings");
        }
        inline app::AkWwiseInitializationSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings
} // namespace app::classes::types
