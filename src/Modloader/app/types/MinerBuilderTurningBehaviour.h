#pragma once
#include <Modloader/app/structs/MinerBuilderTurningBehaviour.h>
#include <Modloader/app/structs/MinerBuilderTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderTurningBehaviour {
        inline app::MinerBuilderTurningBehaviour__Class** type_info() {
            static app::MinerBuilderTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerBuilderTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerBuilderTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderTurningBehaviour__Class>(type_info(), "Moon", "MinerBuilderTurningBehaviour");
        }
        inline app::MinerBuilderTurningBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderTurningBehaviour>(get_class());
        }
    } // namespace MinerBuilderTurningBehaviour
} // namespace app::classes::types
