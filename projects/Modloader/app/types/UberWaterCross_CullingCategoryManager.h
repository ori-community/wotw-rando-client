#pragma once
#include <Modloader/app/structs/UberWaterCross_CullingCategoryManager.h>
#include <Modloader/app/structs/UberWaterCross_CullingCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterCross_CullingCategoryManager {
        inline app::UberWaterCross_CullingCategoryManager__Class** type_info() {
            static app::UberWaterCross_CullingCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterCross_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0471AF28));
            }
            return cache;
        }
        inline app::UberWaterCross_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterCross_CullingCategoryManager__Class>(type_info(), "", "UberWaterCross", "CullingCategoryManager");
        }
        inline app::UberWaterCross_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterCross_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterCross_CullingCategoryManager
} // namespace app::classes::types
