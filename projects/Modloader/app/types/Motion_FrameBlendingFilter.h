#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter__Class.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter {
        inline app::Motion_FrameBlendingFilter__Class** type_info = (app::Motion_FrameBlendingFilter__Class**)(modloader::win::memory::resolve_rva(0x04775820));
        inline app::Motion_FrameBlendingFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_FrameBlendingFilter__Class>(type_info, "Kino", "Motion", "FrameBlendingFilter");
        }
        inline app::Motion_FrameBlendingFilter* create() {
            return il2cpp::create_object<app::Motion_FrameBlendingFilter>(get_class());
        }
    } // namespace Motion_FrameBlendingFilter
} // namespace app::classes::types
