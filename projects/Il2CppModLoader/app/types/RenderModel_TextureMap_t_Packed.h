#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderModel_TextureMap_t_Packed {
        namespace {
            inline app::RenderModel_TextureMap_t_Packed__Class* type_info_ref = nullptr;
        }
        inline app::RenderModel_TextureMap_t_Packed__Class** type_info = &type_info_ref;
        inline app::RenderModel_TextureMap_t_Packed__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_TextureMap_t_Packed__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "RenderModel_TextureMap_t_Packed");
        }
        inline app::RenderModel_TextureMap_t_Packed* create() {
            return il2cpp::create_object<app::RenderModel_TextureMap_t_Packed>(get_class());
        }
        inline app::RenderModel_TextureMap_t_Packed__Boxed* box(app::RenderModel_TextureMap_t_Packed value) {
            return il2cpp::box_value<app::RenderModel_TextureMap_t_Packed__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_TextureMap_t_Packed
} // namespace app::classes::types
