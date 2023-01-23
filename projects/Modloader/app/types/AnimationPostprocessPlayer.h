#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationPostprocessPlayer__Class.h>
#include <Modloader/app/structs/AnimationPostprocessPlayer.h>

namespace app::classes::types {
    namespace AnimationPostprocessPlayer {
        namespace {
            inline app::AnimationPostprocessPlayer__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPostprocessPlayer__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessPlayer__Class>(type_info, "Moon.Timeline", "AnimationPostprocessPlayer");
        }
        inline app::AnimationPostprocessPlayer* create() {
            return il2cpp::create_object<app::AnimationPostprocessPlayer>(get_class());
        }
    } // namespace AnimationPostprocessPlayer
} // namespace app::classes::types
