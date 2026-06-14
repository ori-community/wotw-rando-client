#pragma once
#include <Modloader/app/structs/ICullingCategoryItem.h>
#include <Modloader/app/structs/ICullingCategoryItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryItem {
        inline app::ICullingCategoryItem__Class** type_info() {
            static app::ICullingCategoryItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICullingCategoryItem__Class**)(modloader::win::memory::resolve_rva(0x04715758));
            }
            return cache;
        }
        inline app::ICullingCategoryItem__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryItem__Class>(type_info(), "Moon.Rendering", "ICullingCategoryItem");
        }
    } // namespace ICullingCategoryItem
} // namespace app::classes::types
