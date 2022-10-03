#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkWwiseInitializationSettings_c__Class** type_info;
        inline app::AkWwiseInitializationSettings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_c__Class>(type_info, "", "AkWwiseInitializationSettings", "<>c");
        }
        inline app::AkWwiseInitializationSettings_c* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_c>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_c
} // namespace app::classes::types
