#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Motion_FrameBlendingFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Motion_FrameBlendingFilter__Class** type_info;
        inline app::Motion_FrameBlendingFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_FrameBlendingFilter__Class>(type_info, "Kino", "Motion", "FrameBlendingFilter");
        }
        inline app::Motion_FrameBlendingFilter* create() {
            return il2cpp::create_object<app::Motion_FrameBlendingFilter>(get_class());
        }
    } // namespace Motion_FrameBlendingFilter
} // namespace app::classes::types
