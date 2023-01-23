#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_FrameBlendingFilter__Class.h>
#include <Modloader/app/structs/ShaderID_FrameBlendingFilter.h>

namespace app::classes::types {
    namespace ShaderID_FrameBlendingFilter {
        inline app::ShaderID_FrameBlendingFilter__Class** type_info = (app::ShaderID_FrameBlendingFilter__Class**)(modloader::win::memory::resolve_rva(0x04791BD0));
        inline app::ShaderID_FrameBlendingFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FrameBlendingFilter__Class>(type_info, "Kino", "ShaderID_FrameBlendingFilter");
        }
        inline app::ShaderID_FrameBlendingFilter* create() {
            return il2cpp::create_object<app::ShaderID_FrameBlendingFilter>(get_class());
        }
    } // namespace ShaderID_FrameBlendingFilter
} // namespace app::classes::types
