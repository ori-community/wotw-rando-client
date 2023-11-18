#pragma once
#include <Modloader/app/structs/ICullingCategoryManager.h>
#include <Modloader/app/structs/ICullingCategoryManager__Array.h>
#include <Modloader/app/structs/ICullingCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryManager {
        inline app::ICullingCategoryManager__Class** type_info() {
            static app::ICullingCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0478C070));
            }
            return cache;
        }
        inline app::ICullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Class>(type_info(), "Moon.Rendering", "ICullingCategoryManager");
        }
        inline app::ICullingCategoryManager__Array* create_array(int size) {
            return il2cpp::array_new<app::ICullingCategoryManager__Array>(get_class(), size);
        }
        inline app::ICullingCategoryManager__Array* create_array(const std::vector<app::ICullingCategoryManager*>& items) {
            return il2cpp::array_new<app::ICullingCategoryManager__Array>(get_class(), items);
        }
    } // namespace ICullingCategoryManager
} // namespace app::classes::types
