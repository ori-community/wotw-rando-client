#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterEdge_CullingCategoryManager {
        inline app::UberWaterEdge_CullingCategoryManager__Class** type_info = (app::UberWaterEdge_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0476D220));
        inline app::UberWaterEdge_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterEdge_CullingCategoryManager__Class>(type_info, "", "UberWaterEdge", "CullingCategoryManager");
        }
        inline app::UberWaterEdge_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterEdge_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterEdge_CullingCategoryManager
} // namespace app::classes::types
