#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleIdleBehaviour {
        namespace {
            inline app::TentacleIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TentacleIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleIdleBehaviour__Class>(type_info, "Moon", "TentacleIdleBehaviour");
        }
        inline app::TentacleIdleBehaviour* create() {
            return il2cpp::create_object<app::TentacleIdleBehaviour>(get_class());
        }
    } // namespace TentacleIdleBehaviour
} // namespace app::classes::types
