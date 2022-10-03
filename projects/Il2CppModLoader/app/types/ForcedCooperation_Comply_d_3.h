#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForcedCooperation_Comply_d_3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForcedCooperation_Comply_d_3__Class** type_info;
        inline app::ForcedCooperation_Comply_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::ForcedCooperation_Comply_d_3__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation", "<_Comply>d__3");
        }
        inline app::ForcedCooperation_Comply_d_3* create() {
            return il2cpp::create_object<app::ForcedCooperation_Comply_d_3>(get_class());
        }
    } // namespace ForcedCooperation_Comply_d_3
} // namespace app::classes::types
