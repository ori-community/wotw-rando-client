#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForcedCooperation_Comply_d_3 {
        inline app::ForcedCooperation_Comply_d_3__Class** type_info = (app::ForcedCooperation_Comply_d_3__Class**)(modloader::win::memory::resolve_rva(0x047023D8));
        inline app::ForcedCooperation_Comply_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::ForcedCooperation_Comply_d_3__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation", "<_Comply>d__3");
        }
        inline app::ForcedCooperation_Comply_d_3* create() {
            return il2cpp::create_object<app::ForcedCooperation_Comply_d_3>(get_class());
        }
    } // namespace ForcedCooperation_Comply_d_3
} // namespace app::classes::types
