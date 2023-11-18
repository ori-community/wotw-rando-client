#pragma once
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Array.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerspectiveRotationAdjustment__Array {
        inline app::PerspectiveRotationAdjustment__Array__Class** type_info() {
            static app::PerspectiveRotationAdjustment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerspectiveRotationAdjustment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerspectiveRotationAdjustment__Array__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationAdjustment__Array__Class>(type_info(), "", "PerspectiveRotationAdjustment[]");
        }
        inline app::PerspectiveRotationAdjustment__Array* create() {
            return il2cpp::create_object<app::PerspectiveRotationAdjustment__Array>(get_class());
        }
    } // namespace PerspectiveRotationAdjustment__Array
} // namespace app::classes::types
