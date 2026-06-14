#pragma once
#include <Modloader/app/structs/IPhysicsAttachable.h>
#include <Modloader/app/structs/IPhysicsAttachable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPhysicsAttachable {
        inline app::IPhysicsAttachable__Class** type_info() {
            static app::IPhysicsAttachable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPhysicsAttachable__Class**)(modloader::win::memory::resolve_rva(0x047165B0));
            }
            return cache;
        }
        inline app::IPhysicsAttachable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsAttachable__Class>(type_info(), "Moon", "IPhysicsAttachable");
        }
    } // namespace IPhysicsAttachable
} // namespace app::classes::types
