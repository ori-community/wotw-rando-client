#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstructionLevelActivator__Class.h>
#include <Modloader/app/structs/ConstructionLevelActivator.h>

namespace app::classes::types {
    namespace ConstructionLevelActivator {
        inline app::ConstructionLevelActivator__Class** type_info = (app::ConstructionLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x04777D30));
        inline app::ConstructionLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ConstructionLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
        }
        inline app::ConstructionLevelActivator* create() {
            return il2cpp::create_object<app::ConstructionLevelActivator>(get_class());
        }
    } // namespace ConstructionLevelActivator
} // namespace app::classes::types
