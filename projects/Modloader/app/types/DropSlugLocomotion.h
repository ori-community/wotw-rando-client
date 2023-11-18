#pragma once
#include <Modloader/app/structs/DropSlugLocomotion.h>
#include <Modloader/app/structs/DropSlugLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugLocomotion {
        inline app::DropSlugLocomotion__Class** type_info() {
            static app::DropSlugLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0476D338));
            }
            return cache;
        }
        inline app::DropSlugLocomotion__Class* get_class() {
            return il2cpp::get_class<app::DropSlugLocomotion__Class>(type_info(), "", "DropSlugLocomotion");
        }
        inline app::DropSlugLocomotion* create() {
            return il2cpp::create_object<app::DropSlugLocomotion>(get_class());
        }
    } // namespace DropSlugLocomotion
} // namespace app::classes::types
