#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrap_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseBootstrap_c__Class** type_info;
        inline app::WwiseBootstrap_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseBootstrap_c__Class>(type_info, "Moon.Wwise", "WwiseBootstrap", "<>c");
        }
        inline app::WwiseBootstrap_c* create() {
            return il2cpp::create_object<app::WwiseBootstrap_c>(get_class());
        }
    } // namespace WwiseBootstrap_c
} // namespace app::classes::types
