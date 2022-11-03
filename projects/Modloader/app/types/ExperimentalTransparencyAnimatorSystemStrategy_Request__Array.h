#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_Request__Array {
        namespace {
            inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class** type_info = &type_info_ref;
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+Request[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_Request__Array
} // namespace app::classes::types
