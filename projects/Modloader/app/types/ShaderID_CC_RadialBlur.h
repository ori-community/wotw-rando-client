#pragma once
#include <Modloader/app/structs/ShaderID_CC_RadialBlur.h>
#include <Modloader/app/structs/ShaderID_CC_RadialBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_RadialBlur {
        inline app::ShaderID_CC_RadialBlur__Class** type_info() {
            static app::ShaderID_CC_RadialBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_RadialBlur__Class**)(modloader::win::memory::resolve_rva(0x0478F3E8));
            }
            return cache;
        }
        inline app::ShaderID_CC_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_RadialBlur__Class>(type_info(), "", "ShaderID_CC_RadialBlur");
        }
        inline app::ShaderID_CC_RadialBlur* create() {
            return il2cpp::create_object<app::ShaderID_CC_RadialBlur>(get_class());
        }
    } // namespace ShaderID_CC_RadialBlur
} // namespace app::classes::types
