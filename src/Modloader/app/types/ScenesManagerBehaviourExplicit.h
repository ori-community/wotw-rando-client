#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviourExplicit.h>
#include <Modloader/app/structs/ScenesManagerBehaviourExplicit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourExplicit {
        inline app::ScenesManagerBehaviourExplicit__Class** type_info() {
            static app::ScenesManagerBehaviourExplicit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerBehaviourExplicit__Class**)(modloader::win::memory::resolve_rva(0x0475A1F0));
            }
            return cache;
        }
        inline app::ScenesManagerBehaviourExplicit__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourExplicit__Class>(type_info(), "", "ScenesManagerBehaviourExplicit");
        }
        inline app::ScenesManagerBehaviourExplicit* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourExplicit>(get_class());
        }
    } // namespace ScenesManagerBehaviourExplicit
} // namespace app::classes::types
