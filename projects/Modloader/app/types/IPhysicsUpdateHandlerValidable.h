#pragma once
#include <Modloader/app/structs/IPhysicsUpdateHandlerValidable.h>
#include <Modloader/app/structs/IPhysicsUpdateHandlerValidable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandlerValidable {
        inline app::IPhysicsUpdateHandlerValidable__Class** type_info() {
            static app::IPhysicsUpdateHandlerValidable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPhysicsUpdateHandlerValidable__Class**)(modloader::win::memory::resolve_rva(0x04740498));
            }
            return cache;
        }
        inline app::IPhysicsUpdateHandlerValidable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandlerValidable__Class>(type_info(), "Moon", "IPhysicsUpdateHandlerValidable");
        }
    } // namespace IPhysicsUpdateHandlerValidable
} // namespace app::classes::types
