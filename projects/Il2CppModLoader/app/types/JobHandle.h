#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobHandle {
        namespace {
            app::JobHandle__Class* type_info_ref = nullptr;
        }
        app::JobHandle__Class** type_info = &type_info_ref;
        inline app::JobHandle__Class* get_class() {
            return il2cpp::get_class<app::JobHandle__Class>(type_info, "Unity.Jobs", "JobHandle");
        }
        inline app::JobHandle* create() {
            return il2cpp::create_object<app::JobHandle>(get_class());
        }
        inline app::JobHandle__Boxed* box(app::JobHandle value) {
            return il2cpp::box_value<app::JobHandle__Boxed>(get_class(), value);
        }
    } // namespace JobHandle
} // namespace app::classes::types
