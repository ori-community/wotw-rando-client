#pragma once
#include <Modloader/app/structs/SwimmingLocomotion.h>
#include <Modloader/app/structs/SwimmingLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwimmingLocomotion {
        inline app::SwimmingLocomotion__Class** type_info() {
            static app::SwimmingLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwimmingLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0477A278));
            }
            return cache;
        }
        inline app::SwimmingLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SwimmingLocomotion__Class>(type_info(), "", "SwimmingLocomotion");
        }
        inline app::SwimmingLocomotion* create() {
            return il2cpp::create_object<app::SwimmingLocomotion>(get_class());
        }
    } // namespace SwimmingLocomotion
} // namespace app::classes::types
