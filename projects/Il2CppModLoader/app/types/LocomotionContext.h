#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionContext {
        inline app::LocomotionContext__Class** type_info = (app::LocomotionContext__Class**)(modloader::win::memory::resolve_rva(0x0472CFF8));
        inline app::LocomotionContext__Class* get_class() {
            return il2cpp::get_class<app::LocomotionContext__Class>(type_info, "Moon", "LocomotionContext");
        }
        inline app::LocomotionContext* create() {
            return il2cpp::create_object<app::LocomotionContext>(get_class());
        }
    } // namespace LocomotionContext
} // namespace app::classes::types
