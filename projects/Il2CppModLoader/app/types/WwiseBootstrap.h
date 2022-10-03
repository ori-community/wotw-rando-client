#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseBootstrap__Class** type_info;
        inline app::WwiseBootstrap__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrap__Class>(type_info, "Moon.Wwise", "WwiseBootstrap");
        }
        inline app::WwiseBootstrap* create() {
            return il2cpp::create_object<app::WwiseBootstrap>(get_class());
        }
    } // namespace WwiseBootstrap
} // namespace app::classes::types
