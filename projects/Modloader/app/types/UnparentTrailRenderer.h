#pragma once
#include <Modloader/app/structs/UnparentTrailRenderer.h>
#include <Modloader/app/structs/UnparentTrailRenderer__Array.h>
#include <Modloader/app/structs/UnparentTrailRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer {
        inline app::UnparentTrailRenderer__Class** type_info() {
            static app::UnparentTrailRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnparentTrailRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnparentTrailRenderer__Class* get_class() {
            return il2cpp::get_class<app::UnparentTrailRenderer__Class>(type_info(), "", "UnparentTrailRenderer");
        }
        inline app::UnparentTrailRenderer* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer>(get_class());
        }
        inline app::UnparentTrailRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::UnparentTrailRenderer__Array>(get_class(), size);
        }
        inline app::UnparentTrailRenderer__Array* create_array(const std::vector<app::UnparentTrailRenderer*>& items) {
            return il2cpp::array_new<app::UnparentTrailRenderer__Array>(get_class(), items);
        }
    } // namespace UnparentTrailRenderer
} // namespace app::classes::types
