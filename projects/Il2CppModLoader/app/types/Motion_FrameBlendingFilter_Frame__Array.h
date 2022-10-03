#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter_Frame__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Motion_FrameBlendingFilter_Frame__Array__Class** type_info;
        inline app::Motion_FrameBlendingFilter_Frame__Array__Class* get_class() {
            return il2cpp::get_class<app::Motion_FrameBlendingFilter_Frame__Array__Class>(type_info, "Kino", "Motion+FrameBlendingFilter+Frame[]");
        }
        inline app::Motion_FrameBlendingFilter_Frame__Array* create() {
            return il2cpp::create_object<app::Motion_FrameBlendingFilter_Frame__Array>(get_class());
        }
    } // namespace Motion_FrameBlendingFilter_Frame__Array
} // namespace app::classes::types
