#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugDeathBehaviour__Class.h>
#include <Modloader/app/structs/SpikeSlugDeathBehaviour.h>

namespace app::classes::types {
    namespace SpikeSlugDeathBehaviour {
        namespace {
            inline app::SpikeSlugDeathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugDeathBehaviour__Class>(type_info, "", "SpikeSlugDeathBehaviour");
        }
        inline app::SpikeSlugDeathBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugDeathBehaviour>(get_class());
        }
    } // namespace SpikeSlugDeathBehaviour
} // namespace app::classes::types
