#pragma once
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/SkeetoLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotion {
        inline app::SkeetoLocomotion__Class** type_info() {
            static app::SkeetoLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04715300));
            }
            return cache;
        }
        inline app::SkeetoLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotion__Class>(type_info(), "Moon", "SkeetoLocomotion");
        }
        inline app::SkeetoLocomotion* create() {
            return il2cpp::create_object<app::SkeetoLocomotion>(get_class());
        }
    } // namespace SkeetoLocomotion
} // namespace app::classes::types
