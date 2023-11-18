#pragma once
#include <Modloader/app/structs/UberWaterEdge_CullingCategoryManager.h>
#include <Modloader/app/structs/UberWaterEdge_CullingCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge_CullingCategoryManager {
        inline app::UberWaterEdge_CullingCategoryManager__Class** type_info() {
            static app::UberWaterEdge_CullingCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterEdge_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0476D220));
            }
            return cache;
        }
        inline app::UberWaterEdge_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterEdge_CullingCategoryManager__Class>(type_info(), "", "UberWaterEdge", "CullingCategoryManager");
        }
        inline app::UberWaterEdge_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterEdge_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterEdge_CullingCategoryManager
} // namespace app::classes::types
