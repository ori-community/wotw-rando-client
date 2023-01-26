#pragma once
#include <Modloader/app/structs/ShaderID_ColorAnimator.h>
#include <Modloader/app/structs/ShaderID_ColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorAnimator {
        inline app::ShaderID_ColorAnimator__Class** type_info() {
            static app::ShaderID_ColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04724640));
            }
            return cache;
        }
        inline app::ShaderID_ColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorAnimator__Class>(type_info(), "", "ShaderID_ColorAnimator");
        }
        inline app::ShaderID_ColorAnimator* create() {
            return il2cpp::create_object<app::ShaderID_ColorAnimator>(get_class());
        }
    } // namespace ShaderID_ColorAnimator
} // namespace app::classes::types
