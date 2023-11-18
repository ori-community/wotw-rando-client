#pragma once
#include <Modloader/app/structs/SpikeSlugDeathBehaviour.h>
#include <Modloader/app/structs/SpikeSlugDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugDeathBehaviour {
        inline app::SpikeSlugDeathBehaviour__Class** type_info() {
            static app::SpikeSlugDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugDeathBehaviour__Class>(type_info(), "", "SpikeSlugDeathBehaviour");
        }
        inline app::SpikeSlugDeathBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugDeathBehaviour>(get_class());
        }
    } // namespace SpikeSlugDeathBehaviour
} // namespace app::classes::types
