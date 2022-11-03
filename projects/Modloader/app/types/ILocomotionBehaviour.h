#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILocomotionBehaviour {
        inline app::ILocomotionBehaviour__Class** type_info = (app::ILocomotionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047757C8));
        inline app::ILocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionBehaviour__Class>(type_info, "", "ILocomotionBehaviour");
        }
    } // namespace ILocomotionBehaviour
} // namespace app::classes::types
