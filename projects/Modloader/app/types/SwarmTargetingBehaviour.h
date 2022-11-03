#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmTargetingBehaviour {
        namespace {
            inline app::SwarmTargetingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SwarmTargetingBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmTargetingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmTargetingBehaviour__Class>(type_info, "", "SwarmTargetingBehaviour");
        }
        inline app::SwarmTargetingBehaviour* create() {
            return il2cpp::create_object<app::SwarmTargetingBehaviour>(get_class());
        }
    } // namespace SwarmTargetingBehaviour
} // namespace app::classes::types
