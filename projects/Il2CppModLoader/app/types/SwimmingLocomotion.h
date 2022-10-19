#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwimmingLocomotion {
        inline app::SwimmingLocomotion__Class** type_info = (app::SwimmingLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0477A278));
        inline app::SwimmingLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SwimmingLocomotion__Class>(type_info, "", "SwimmingLocomotion");
        }
        inline app::SwimmingLocomotion* create() {
            return il2cpp::create_object<app::SwimmingLocomotion>(get_class());
        }
    } // namespace SwimmingLocomotion
} // namespace app::classes::types
