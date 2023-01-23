#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManagerBehaviourLegacy__Class.h>
#include <Modloader/app/structs/ScenesManagerBehaviourLegacy.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourLegacy {
        inline app::ScenesManagerBehaviourLegacy__Class** type_info = (app::ScenesManagerBehaviourLegacy__Class**)(modloader::win::memory::resolve_rva(0x04713B08));
        inline app::ScenesManagerBehaviourLegacy__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourLegacy__Class>(type_info, "", "ScenesManagerBehaviourLegacy");
        }
        inline app::ScenesManagerBehaviourLegacy* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourLegacy>(get_class());
        }
    } // namespace ScenesManagerBehaviourLegacy
} // namespace app::classes::types
