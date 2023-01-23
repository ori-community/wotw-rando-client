#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICullingCategoryManager__Array__Class.h>
#include <Modloader/app/structs/ICullingCategoryManager__Array.h>

namespace app::classes::types {
    namespace ICullingCategoryManager__Array {
        inline app::ICullingCategoryManager__Array__Class** type_info = (app::ICullingCategoryManager__Array__Class**)(modloader::win::memory::resolve_rva(0x04763C50));
        inline app::ICullingCategoryManager__Array__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Array__Class>(type_info, "Moon.Rendering", "ICullingCategoryManager[]");
        }
        inline app::ICullingCategoryManager__Array* create() {
            return il2cpp::create_object<app::ICullingCategoryManager__Array>(get_class());
        }
    } // namespace ICullingCategoryManager__Array
} // namespace app::classes::types
