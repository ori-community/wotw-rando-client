#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlHurtState {
        inline app::DashOwlHurtState__Class** type_info = (app::DashOwlHurtState__Class**)(modloader::win::memory::resolve_rva(0x0478B268));
        inline app::DashOwlHurtState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlHurtState__Class>(type_info, "", "DashOwlHurtState");
        }
        inline app::DashOwlHurtState* create() {
            return il2cpp::create_object<app::DashOwlHurtState>(get_class());
        }
    } // namespace DashOwlHurtState
} // namespace app::classes::types
