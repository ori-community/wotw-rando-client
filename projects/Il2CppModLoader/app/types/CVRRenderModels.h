#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRRenderModels {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRRenderModels__Class** type_info;
        inline app::CVRRenderModels__Class* get_class() {
            return il2cpp::get_class<app::CVRRenderModels__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels");
        }
        inline app::CVRRenderModels* create() {
            return il2cpp::create_object<app::CVRRenderModels>(get_class());
        }
    } // namespace CVRRenderModels
} // namespace app::classes::types
