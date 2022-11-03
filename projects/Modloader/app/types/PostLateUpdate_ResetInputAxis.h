#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_ResetInputAxis {
        namespace {
            inline app::PostLateUpdate_ResetInputAxis__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_ResetInputAxis__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ResetInputAxis__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ResetInputAxis__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ResetInputAxis");
        }
        inline app::PostLateUpdate_ResetInputAxis* create() {
            return il2cpp::create_object<app::PostLateUpdate_ResetInputAxis>(get_class());
        }
        inline app::PostLateUpdate_ResetInputAxis__Boxed* box(app::PostLateUpdate_ResetInputAxis value) {
            return il2cpp::box_value<app::PostLateUpdate_ResetInputAxis__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ResetInputAxis
} // namespace app::classes::types
