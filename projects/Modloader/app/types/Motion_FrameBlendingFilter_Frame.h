#pragma once
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Array.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Boxed.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter_Frame {
        inline app::Motion_FrameBlendingFilter_Frame__Class** type_info() {
            static app::Motion_FrameBlendingFilter_Frame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Motion_FrameBlendingFilter_Frame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Motion_FrameBlendingFilter_Frame__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_FrameBlendingFilter_Frame__Class>(type_info(), "Kino", "Motion+FrameBlendingFilter", "Frame");
        }
        inline app::Motion_FrameBlendingFilter_Frame* create() {
            return il2cpp::create_object<app::Motion_FrameBlendingFilter_Frame>(get_class());
        }
        inline app::Motion_FrameBlendingFilter_Frame__Boxed* box(app::Motion_FrameBlendingFilter_Frame value) {
            return il2cpp::box_value<app::Motion_FrameBlendingFilter_Frame__Boxed>(get_class(), value);
        }
        inline app::Motion_FrameBlendingFilter_Frame__Array* create_array(int size) {
            return il2cpp::array_new<app::Motion_FrameBlendingFilter_Frame__Array>(get_class(), size);
        }
        inline app::Motion_FrameBlendingFilter_Frame__Array* create_array(const std::vector<app::Motion_FrameBlendingFilter_Frame>& items) {
            return il2cpp::array_new<app::Motion_FrameBlendingFilter_Frame__Array>(get_class(), items);
        }
    } // namespace Motion_FrameBlendingFilter_Frame
} // namespace app::classes::types
