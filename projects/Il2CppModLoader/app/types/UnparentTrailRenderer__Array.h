#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer__Array {
        namespace {
            app::UnparentTrailRenderer__Array__Class* type_info_ref = nullptr;
        }
        app::UnparentTrailRenderer__Array__Class** type_info = &type_info_ref;
        inline app::UnparentTrailRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::UnparentTrailRenderer__Array__Class>(type_info, "", "UnparentTrailRenderer[]");
        }
        inline app::UnparentTrailRenderer__Array* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer__Array>(get_class());
        }
    } // namespace UnparentTrailRenderer__Array
} // namespace app::classes::types
