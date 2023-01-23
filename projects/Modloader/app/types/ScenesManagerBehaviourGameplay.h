#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManagerBehaviourGameplay__Class.h>
#include <Modloader/app/structs/ScenesManagerBehaviourGameplay.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourGameplay {
        inline app::ScenesManagerBehaviourGameplay__Class** type_info = (app::ScenesManagerBehaviourGameplay__Class**)(modloader::win::memory::resolve_rva(0x04718C38));
        inline app::ScenesManagerBehaviourGameplay__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourGameplay__Class>(type_info, "", "ScenesManagerBehaviourGameplay");
        }
        inline app::ScenesManagerBehaviourGameplay* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourGameplay>(get_class());
        }
    } // namespace ScenesManagerBehaviourGameplay
} // namespace app::classes::types
