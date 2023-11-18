#pragma once
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#include <Modloader/app/structs/StaticEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticEntityLocomotion {
        inline app::StaticEntityLocomotion__Class** type_info() {
            static app::StaticEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StaticEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x047938D0));
            }
            return cache;
        }
        inline app::StaticEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityLocomotion__Class>(type_info(), "Moon", "StaticEntityLocomotion");
        }
        inline app::StaticEntityLocomotion* create() {
            return il2cpp::create_object<app::StaticEntityLocomotion>(get_class());
        }
    } // namespace StaticEntityLocomotion
} // namespace app::classes::types
