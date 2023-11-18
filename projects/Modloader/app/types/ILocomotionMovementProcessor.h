#pragma once
#include <Modloader/app/structs/ILocomotionMovementProcessor.h>
#include <Modloader/app/structs/ILocomotionMovementProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILocomotionMovementProcessor {
        inline app::ILocomotionMovementProcessor__Class** type_info() {
            static app::ILocomotionMovementProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILocomotionMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x0475A8D0));
            }
            return cache;
        }
        inline app::ILocomotionMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionMovementProcessor__Class>(type_info(), "", "ILocomotionMovementProcessor");
        }
    } // namespace ILocomotionMovementProcessor
} // namespace app::classes::types
