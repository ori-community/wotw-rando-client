#pragma once
#include <Modloader/app/structs/UnparentTrailRenderer__Array.h>
#include <Modloader/app/structs/UnparentTrailRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer__Array {
        inline app::UnparentTrailRenderer__Array__Class** type_info() {
            static app::UnparentTrailRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnparentTrailRenderer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnparentTrailRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::UnparentTrailRenderer__Array__Class>(type_info(), "", "UnparentTrailRenderer[]");
        }
        inline app::UnparentTrailRenderer__Array* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer__Array>(get_class());
        }
    } // namespace UnparentTrailRenderer__Array
} // namespace app::classes::types
