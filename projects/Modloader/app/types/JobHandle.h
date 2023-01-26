#pragma once
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/JobHandle__Boxed.h>
#include <Modloader/app/structs/JobHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobHandle {
        inline app::JobHandle__Class** type_info() {
            static app::JobHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobHandle__Class* get_class() {
            return il2cpp::get_class<app::JobHandle__Class>(type_info(), "Unity.Jobs", "JobHandle");
        }
        inline app::JobHandle* create() {
            return il2cpp::create_object<app::JobHandle>(get_class());
        }
        inline app::JobHandle__Boxed* box(app::JobHandle value) {
            return il2cpp::box_value<app::JobHandle__Boxed>(get_class(), value);
        }
    } // namespace JobHandle
} // namespace app::classes::types
