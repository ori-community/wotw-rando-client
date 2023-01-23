#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotationLimitSpline__Class.h>
#include <Modloader/app/structs/RotationLimitSpline.h>

namespace app::classes::types {
    namespace RotationLimitSpline {
        namespace {
            inline app::RotationLimitSpline__Class* type_info_ref = nullptr;
        }
        inline app::RotationLimitSpline__Class** type_info = &type_info_ref;
        inline app::RotationLimitSpline__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitSpline__Class>(type_info, "RootMotion.FinalIK", "RotationLimitSpline");
        }
        inline app::RotationLimitSpline* create() {
            return il2cpp::create_object<app::RotationLimitSpline>(get_class());
        }
    } // namespace RotationLimitSpline
} // namespace app::classes::types
