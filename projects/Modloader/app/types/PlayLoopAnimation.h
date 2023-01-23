#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayLoopAnimation__Class.h>
#include <Modloader/app/structs/PlayLoopAnimation.h>

namespace app::classes::types {
    namespace PlayLoopAnimation {
        namespace {
            inline app::PlayLoopAnimation__Class* type_info_ref = nullptr;
        }
        inline app::PlayLoopAnimation__Class** type_info = &type_info_ref;
        inline app::PlayLoopAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayLoopAnimation__Class>(type_info, "", "PlayLoopAnimation");
        }
        inline app::PlayLoopAnimation* create() {
            return il2cpp::create_object<app::PlayLoopAnimation>(get_class());
        }
    } // namespace PlayLoopAnimation
} // namespace app::classes::types
