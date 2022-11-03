#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourCinematic {
        inline app::ScenesManagerBehaviourCinematic__Class** type_info = (app::ScenesManagerBehaviourCinematic__Class**)(modloader::win::memory::resolve_rva(0x04735670));
        inline app::ScenesManagerBehaviourCinematic__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourCinematic__Class>(type_info, "", "ScenesManagerBehaviourCinematic");
        }
        inline app::ScenesManagerBehaviourCinematic* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourCinematic>(get_class());
        }
    } // namespace ScenesManagerBehaviourCinematic
} // namespace app::classes::types
