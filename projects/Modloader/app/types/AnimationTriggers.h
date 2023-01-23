#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationTriggers__Class.h>
#include <Modloader/app/structs/AnimationTriggers.h>

namespace app::classes::types {
    namespace AnimationTriggers {
        inline app::AnimationTriggers__Class** type_info = (app::AnimationTriggers__Class**)(modloader::win::memory::resolve_rva(0x04768588));
        inline app::AnimationTriggers__Class* get_class() {
            return il2cpp::get_class<app::AnimationTriggers__Class>(type_info, "UnityEngine.UI", "AnimationTriggers");
        }
        inline app::AnimationTriggers* create() {
            return il2cpp::create_object<app::AnimationTriggers>(get_class());
        }
    } // namespace AnimationTriggers
} // namespace app::classes::types
