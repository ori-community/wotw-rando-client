#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurningBehaviour {
        namespace {
            inline app::TurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TurningBehaviour__Class** type_info = &type_info_ref;
        inline app::TurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurningBehaviour__Class>(type_info, "Moon", "TurningBehaviour");
        }
        inline app::TurningBehaviour* create() {
            return il2cpp::create_object<app::TurningBehaviour>(get_class());
        }
    } // namespace TurningBehaviour
} // namespace app::classes::types
