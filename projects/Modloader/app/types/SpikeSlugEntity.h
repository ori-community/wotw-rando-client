#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugEntity__Class.h>
#include <Modloader/app/structs/SpikeSlugEntity.h>

namespace app::classes::types {
    namespace SpikeSlugEntity {
        inline app::SpikeSlugEntity__Class** type_info = (app::SpikeSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x0478F138));
        inline app::SpikeSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugEntity__Class>(type_info, "", "SpikeSlugEntity");
        }
        inline app::SpikeSlugEntity* create() {
            return il2cpp::create_object<app::SpikeSlugEntity>(get_class());
        }
    } // namespace SpikeSlugEntity
} // namespace app::classes::types
