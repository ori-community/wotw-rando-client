#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullingCategoryManager {
        inline app::CullingCategoryManager__Class** type_info = (app::CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x04755C80));
        inline app::CullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::CullingCategoryManager__Class>(type_info, "Moon.Rendering", "CullingCategoryManager");
        }
        inline app::CullingCategoryManager* create() {
            return il2cpp::create_object<app::CullingCategoryManager>(get_class());
        }
    } // namespace CullingCategoryManager
} // namespace app::classes::types
