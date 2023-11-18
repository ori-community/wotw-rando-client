#pragma once
#include <Modloader/app/structs/CullingCategoryManager.h>
#include <Modloader/app/structs/CullingCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullingCategoryManager {
        inline app::CullingCategoryManager__Class** type_info() {
            static app::CullingCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x04755C80));
            }
            return cache;
        }
        inline app::CullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::CullingCategoryManager__Class>(type_info(), "Moon.Rendering", "CullingCategoryManager");
        }
        inline app::CullingCategoryManager* create() {
            return il2cpp::create_object<app::CullingCategoryManager>(get_class());
        }
    } // namespace CullingCategoryManager
} // namespace app::classes::types
