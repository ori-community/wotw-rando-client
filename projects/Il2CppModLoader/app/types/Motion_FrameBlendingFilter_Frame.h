#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter_Frame {
        namespace {
            app::Motion_FrameBlendingFilter_Frame__Class* type_info_ref = nullptr;
        }
        app::Motion_FrameBlendingFilter_Frame__Class** type_info = &type_info_ref;
        inline app::Motion_FrameBlendingFilter_Frame__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_FrameBlendingFilter_Frame__Class>(type_info, "Kino", "Motion+FrameBlendingFilter", "Frame");
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
