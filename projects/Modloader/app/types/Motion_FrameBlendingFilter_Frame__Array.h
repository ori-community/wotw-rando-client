#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Array__Class.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Array.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter_Frame__Array {
        inline app::Motion_FrameBlendingFilter_Frame__Array__Class** type_info = (app::Motion_FrameBlendingFilter_Frame__Array__Class**)(modloader::win::memory::resolve_rva(0x0474EED8));
        inline app::Motion_FrameBlendingFilter_Frame__Array__Class* get_class() {
            return il2cpp::get_class<app::Motion_FrameBlendingFilter_Frame__Array__Class>(type_info, "Kino", "Motion+FrameBlendingFilter+Frame[]");
        }
        inline app::Motion_FrameBlendingFilter_Frame__Array* create() {
            return il2cpp::create_object<app::Motion_FrameBlendingFilter_Frame__Array>(get_class());
        }
    } // namespace Motion_FrameBlendingFilter_Frame__Array
} // namespace app::classes::types
