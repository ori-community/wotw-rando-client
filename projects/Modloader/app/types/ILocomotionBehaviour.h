#pragma once
#include <Modloader/app/structs/ILocomotionBehaviour.h>
#include <Modloader/app/structs/ILocomotionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILocomotionBehaviour {
        inline app::ILocomotionBehaviour__Class** type_info() {
            static app::ILocomotionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILocomotionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047757C8));
            }
            return cache;
        }
        inline app::ILocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionBehaviour__Class>(type_info(), "", "ILocomotionBehaviour");
        }
    } // namespace ILocomotionBehaviour
} // namespace app::classes::types
