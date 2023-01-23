#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_GradientRamp__Class.h>
#include <Modloader/app/structs/ShaderID_GradientRamp.h>

namespace app::classes::types {
    namespace ShaderID_GradientRamp {
        inline app::ShaderID_GradientRamp__Class** type_info = (app::ShaderID_GradientRamp__Class**)(modloader::win::memory::resolve_rva(0x04749EF8));
        inline app::ShaderID_GradientRamp__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GradientRamp__Class>(type_info, "Colorful", "ShaderID_GradientRamp");
        }
        inline app::ShaderID_GradientRamp* create() {
            return il2cpp::create_object<app::ShaderID_GradientRamp>(get_class());
        }
    } // namespace ShaderID_GradientRamp
} // namespace app::classes::types
