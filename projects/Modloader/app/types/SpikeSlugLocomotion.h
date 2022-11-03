#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotion {
        inline app::SpikeSlugLocomotion__Class** type_info = (app::SpikeSlugLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04737880));
        inline app::SpikeSlugLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotion__Class>(type_info, "", "SpikeSlugLocomotion");
        }
        inline app::SpikeSlugLocomotion* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotion>(get_class());
        }
    } // namespace SpikeSlugLocomotion
} // namespace app::classes::types
