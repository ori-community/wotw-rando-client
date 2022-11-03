#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer__Array {
        namespace {
            inline app::UnparentTrailRenderer__Array__Class* type_info_ref = nullptr;
        }
        inline app::UnparentTrailRenderer__Array__Class** type_info = &type_info_ref;
        inline app::UnparentTrailRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::UnparentTrailRenderer__Array__Class>(type_info, "", "UnparentTrailRenderer[]");
        }
        inline app::UnparentTrailRenderer__Array* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer__Array>(get_class());
        }
    } // namespace UnparentTrailRenderer__Array
} // namespace app::classes::types
