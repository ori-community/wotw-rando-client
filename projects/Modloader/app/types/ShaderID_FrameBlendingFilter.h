#pragma once
#include <Modloader/app/structs/ShaderID_FrameBlendingFilter.h>
#include <Modloader/app/structs/ShaderID_FrameBlendingFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FrameBlendingFilter {
        inline app::ShaderID_FrameBlendingFilter__Class** type_info() {
            static app::ShaderID_FrameBlendingFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FrameBlendingFilter__Class**)(modloader::win::memory::resolve_rva(0x04791BD0));
            }
            return cache;
        }
        inline app::ShaderID_FrameBlendingFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FrameBlendingFilter__Class>(type_info(), "Kino", "ShaderID_FrameBlendingFilter");
        }
        inline app::ShaderID_FrameBlendingFilter* create() {
            return il2cpp::create_object<app::ShaderID_FrameBlendingFilter>(get_class());
        }
    } // namespace ShaderID_FrameBlendingFilter
} // namespace app::classes::types
