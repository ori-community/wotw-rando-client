#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GradientRamp__Class.h>
#include <Modloader/app/structs/GradientRamp.h>

namespace app::classes::types {
    namespace GradientRamp {
        namespace {
            inline app::GradientRamp__Class* type_info_ref = nullptr;
        }
        inline app::GradientRamp__Class** type_info = &type_info_ref;
        inline app::GradientRamp__Class* get_class() {
            return il2cpp::get_class<app::GradientRamp__Class>(type_info, "Colorful", "GradientRamp");
        }
        inline app::GradientRamp* create() {
            return il2cpp::create_object<app::GradientRamp>(get_class());
        }
    } // namespace GradientRamp
} // namespace app::classes::types
