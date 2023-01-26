#pragma once
#include <Modloader/app/structs/UberWaterTop_CullingCategoryManager.h>
#include <Modloader/app/structs/UberWaterTop_CullingCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop_CullingCategoryManager {
        inline app::UberWaterTop_CullingCategoryManager__Class** type_info() {
            static app::UberWaterTop_CullingCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterTop_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0475DAC8));
            }
            return cache;
        }
        inline app::UberWaterTop_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterTop_CullingCategoryManager__Class>(type_info(), "", "UberWaterTop", "CullingCategoryManager");
        }
        inline app::UberWaterTop_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterTop_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterTop_CullingCategoryManager
} // namespace app::classes::types
