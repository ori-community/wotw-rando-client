#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviourUtility.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility {
        inline app::ScenesManagerBehaviourUtility__Class** type_info() {
            static app::ScenesManagerBehaviourUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerBehaviourUtility__Class**)(modloader::win::memory::resolve_rva(0x047270B0));
            }
            return cache;
        }
        inline app::ScenesManagerBehaviourUtility__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourUtility__Class>(type_info(), "", "ScenesManagerBehaviourUtility");
        }
        inline app::ScenesManagerBehaviourUtility* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourUtility>(get_class());
        }
    } // namespace ScenesManagerBehaviourUtility
} // namespace app::classes::types
