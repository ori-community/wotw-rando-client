#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorPostprocessPlayer {
        namespace {
            inline app::AnimatorPostprocessPlayer__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorPostprocessPlayer__Class** type_info = &type_info_ref;
        inline app::AnimatorPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPostprocessPlayer__Class>(type_info, "Moon.Animation", "AnimatorPostprocessPlayer");
        }
        inline app::AnimatorPostprocessPlayer* create() {
            return il2cpp::create_object<app::AnimatorPostprocessPlayer>(get_class());
        }
    } // namespace AnimatorPostprocessPlayer
} // namespace app::classes::types
