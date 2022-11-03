#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationWarping {
        namespace {
            inline app::AnimationWarping__Class* type_info_ref = nullptr;
        }
        inline app::AnimationWarping__Class** type_info = &type_info_ref;
        inline app::AnimationWarping__Class* get_class() {
            return il2cpp::get_class<app::AnimationWarping__Class>(type_info, "RootMotion.Demos", "AnimationWarping");
        }
        inline app::AnimationWarping* create() {
            return il2cpp::create_object<app::AnimationWarping>(get_class());
        }
    } // namespace AnimationWarping
} // namespace app::classes::types
