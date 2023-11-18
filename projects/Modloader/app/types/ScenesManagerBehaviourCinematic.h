#pragma once
#include <Modloader/app/structs/ScenesManagerBehaviourCinematic.h>
#include <Modloader/app/structs/ScenesManagerBehaviourCinematic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourCinematic {
        inline app::ScenesManagerBehaviourCinematic__Class** type_info() {
            static app::ScenesManagerBehaviourCinematic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerBehaviourCinematic__Class**)(modloader::win::memory::resolve_rva(0x04735670));
            }
            return cache;
        }
        inline app::ScenesManagerBehaviourCinematic__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourCinematic__Class>(type_info(), "", "ScenesManagerBehaviourCinematic");
        }
        inline app::ScenesManagerBehaviourCinematic* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourCinematic>(get_class());
        }
    } // namespace ScenesManagerBehaviourCinematic
} // namespace app::classes::types
