#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerBuilderTurningBehaviour {
        namespace {
            inline app::MinerBuilderTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerBuilderTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerBuilderTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderTurningBehaviour__Class>(type_info, "Moon", "MinerBuilderTurningBehaviour");
        }
        inline app::MinerBuilderTurningBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderTurningBehaviour>(get_class());
        }
    } // namespace MinerBuilderTurningBehaviour
} // namespace app::classes::types
