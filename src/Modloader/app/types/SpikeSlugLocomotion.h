#pragma once
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#include <Modloader/app/structs/SpikeSlugLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotion {
        inline app::SpikeSlugLocomotion__Class** type_info() {
            static app::SpikeSlugLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpikeSlugLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04737880));
            }
            return cache;
        }
        inline app::SpikeSlugLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotion__Class>(type_info(), "", "SpikeSlugLocomotion");
        }
        inline app::SpikeSlugLocomotion* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotion>(get_class());
        }
    } // namespace SpikeSlugLocomotion
} // namespace app::classes::types
