#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICullingCategoryManager {
        inline app::ICullingCategoryManager__Class** type_info = (app::ICullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0478C070));
        inline app::ICullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Class>(type_info, "Moon.Rendering", "ICullingCategoryManager");
        }
        inline app::ICullingCategoryManager__Array* create_array(int size) {
            return il2cpp::array_new<app::ICullingCategoryManager__Array>(get_class(), size);
        }
        inline app::ICullingCategoryManager__Array* create_array(const std::vector<app::ICullingCategoryManager*>& items) {
            return il2cpp::array_new<app::ICullingCategoryManager__Array>(get_class(), items);
        }
    } // namespace ICullingCategoryManager
} // namespace app::classes::types
