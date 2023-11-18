#pragma once
#include <Modloader/app/structs/ConstructionLevelActivator.h>
#include <Modloader/app/structs/ConstructionLevelActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructionLevelActivator {
        inline app::ConstructionLevelActivator__Class** type_info() {
            static app::ConstructionLevelActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructionLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x04777D30));
            }
            return cache;
        }
        inline app::ConstructionLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ConstructionLevelActivator__Class>(type_info(), "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
        }
        inline app::ConstructionLevelActivator* create() {
            return il2cpp::create_object<app::ConstructionLevelActivator>(get_class());
        }
    } // namespace ConstructionLevelActivator
} // namespace app::classes::types
