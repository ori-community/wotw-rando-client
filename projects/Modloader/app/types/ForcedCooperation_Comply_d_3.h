#pragma once
#include <Modloader/app/structs/ForcedCooperation_Comply_d_3.h>
#include <Modloader/app/structs/ForcedCooperation_Comply_d_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForcedCooperation_Comply_d_3 {
        inline app::ForcedCooperation_Comply_d_3__Class** type_info() {
            static app::ForcedCooperation_Comply_d_3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ForcedCooperation_Comply_d_3__Class**)(modloader::win::memory::resolve_rva(0x047023D8));
            }
            return cache;
        }
        inline app::ForcedCooperation_Comply_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::ForcedCooperation_Comply_d_3__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation", "<_Comply>d__3");
        }
        inline app::ForcedCooperation_Comply_d_3* create() {
            return il2cpp::create_object<app::ForcedCooperation_Comply_d_3>(get_class());
        }
    } // namespace ForcedCooperation_Comply_d_3
} // namespace app::classes::types
