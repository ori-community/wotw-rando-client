#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockableLaser_ActivationTimeslicer_Request__Array {
        namespace {
            inline app::BlockableLaser_ActivationTimeslicer_Request__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array__Class** type_info = &type_info_ref;
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser_ActivationTimeslicer_Request__Array__Class>(type_info, "", "BlockableLaser+ActivationTimeslicer+Request[]");
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array* create() {
            return il2cpp::create_object<app::BlockableLaser_ActivationTimeslicer_Request__Array>(get_class());
        }
    } // namespace BlockableLaser_ActivationTimeslicer_Request__Array
} // namespace app::classes::types
