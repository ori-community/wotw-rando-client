#pragma once
#include <Modloader/app/structs/ICullingCategoryManager__Array.h>
#include <Modloader/app/structs/ICullingCategoryManager__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryManager__Array {
        inline app::ICullingCategoryManager__Array__Class** type_info() {
            static app::ICullingCategoryManager__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICullingCategoryManager__Array__Class**)(modloader::win::memory::resolve_rva(0x04763C50));
            }
            return cache;
        }
        inline app::ICullingCategoryManager__Array__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Array__Class>(type_info(), "Moon.Rendering", "ICullingCategoryManager[]");
        }
        inline app::ICullingCategoryManager__Array* create() {
            return il2cpp::create_object<app::ICullingCategoryManager__Array>(get_class());
        }
    } // namespace ICullingCategoryManager__Array
} // namespace app::classes::types
