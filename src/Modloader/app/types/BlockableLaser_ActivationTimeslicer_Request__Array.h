#pragma once
#include <Modloader/app/structs/BlockableLaser_ActivationTimeslicer_Request__Array.h>
#include <Modloader/app/structs/BlockableLaser_ActivationTimeslicer_Request__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockableLaser_ActivationTimeslicer_Request__Array {
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array__Class** type_info() {
            static app::BlockableLaser_ActivationTimeslicer_Request__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockableLaser_ActivationTimeslicer_Request__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser_ActivationTimeslicer_Request__Array__Class>(type_info(), "", "BlockableLaser+ActivationTimeslicer+Request[]");
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array* create() {
            return il2cpp::create_object<app::BlockableLaser_ActivationTimeslicer_Request__Array>(get_class());
        }
    } // namespace BlockableLaser_ActivationTimeslicer_Request__Array
} // namespace app::classes::types
