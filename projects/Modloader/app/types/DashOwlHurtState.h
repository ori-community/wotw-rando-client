#pragma once
#include <Modloader/app/structs/DashOwlHurtState.h>
#include <Modloader/app/structs/DashOwlHurtState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlHurtState {
        inline app::DashOwlHurtState__Class** type_info() {
            static app::DashOwlHurtState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlHurtState__Class**)(modloader::win::memory::resolve_rva(0x0478B268));
            }
            return cache;
        }
        inline app::DashOwlHurtState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlHurtState__Class>(type_info(), "", "DashOwlHurtState");
        }
        inline app::DashOwlHurtState* create() {
            return il2cpp::create_object<app::DashOwlHurtState>(get_class());
        }
    } // namespace DashOwlHurtState
} // namespace app::classes::types
