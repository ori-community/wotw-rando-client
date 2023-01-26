#pragma once
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/ILocomotionTurningHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILocomotionTurningHandler {
        inline app::ILocomotionTurningHandler__Class** type_info() {
            static app::ILocomotionTurningHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILocomotionTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04732300));
            }
            return cache;
        }
        inline app::ILocomotionTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionTurningHandler__Class>(type_info(), "", "ILocomotionTurningHandler");
        }
    } // namespace ILocomotionTurningHandler
} // namespace app::classes::types
