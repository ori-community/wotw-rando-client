#pragma once
#include <Modloader/app/structs/FixedDurationSceneEntity__Array.h>
#include <Modloader/app/structs/FixedDurationSceneEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity__Array {
        inline app::FixedDurationSceneEntity__Array__Class** type_info() {
            static app::FixedDurationSceneEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedDurationSceneEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedDurationSceneEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedDurationSceneEntity__Array__Class>(type_info(), "Moon.Timeline", "FixedDurationSceneEntity[]");
        }
        inline app::FixedDurationSceneEntity__Array* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity__Array>(get_class());
        }
    } // namespace FixedDurationSceneEntity__Array
} // namespace app::classes::types
