#pragma once
#include <Modloader/app/structs/ShaderID_GradientRampDynamic.h>
#include <Modloader/app/structs/ShaderID_GradientRampDynamic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GradientRampDynamic {
        inline app::ShaderID_GradientRampDynamic__Class** type_info() {
            static app::ShaderID_GradientRampDynamic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GradientRampDynamic__Class**)(modloader::win::memory::resolve_rva(0x0471F658));
            }
            return cache;
        }
        inline app::ShaderID_GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GradientRampDynamic__Class>(type_info(), "Colorful", "ShaderID_GradientRampDynamic");
        }
        inline app::ShaderID_GradientRampDynamic* create() {
            return il2cpp::create_object<app::ShaderID_GradientRampDynamic>(get_class());
        }
    } // namespace ShaderID_GradientRampDynamic
} // namespace app::classes::types
