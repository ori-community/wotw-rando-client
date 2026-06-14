#pragma once
#include <Modloader/app/structs/IPhysicsTriggerHandler.h>
#include <Modloader/app/structs/IPhysicsTriggerHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPhysicsTriggerHandler {
        inline app::IPhysicsTriggerHandler__Class** type_info() {
            static app::IPhysicsTriggerHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPhysicsTriggerHandler__Class**)(modloader::win::memory::resolve_rva(0x0475DE68));
            }
            return cache;
        }
        inline app::IPhysicsTriggerHandler__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsTriggerHandler__Class>(type_info(), "", "IPhysicsTriggerHandler");
        }
    } // namespace IPhysicsTriggerHandler
} // namespace app::classes::types
