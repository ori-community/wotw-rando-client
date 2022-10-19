#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterTop_CullingCategoryManager {
        inline app::UberWaterTop_CullingCategoryManager__Class** type_info = (app::UberWaterTop_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0475DAC8));
        inline app::UberWaterTop_CullingCategoryManager__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterTop_CullingCategoryManager__Class>(type_info, "", "UberWaterTop", "CullingCategoryManager");
        }
        inline app::UberWaterTop_CullingCategoryManager* create() {
            return il2cpp::create_object<app::UberWaterTop_CullingCategoryManager>(get_class());
        }
    } // namespace UberWaterTop_CullingCategoryManager
} // namespace app::classes::types
