#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate {
        namespace {
            inline app::PostLateUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate__Class* get_class() {
            return il2cpp::get_class<app::PostLateUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate");
        }
        inline app::PostLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate>(get_class());
        }
        inline app::PostLateUpdate__Boxed* box(app::PostLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate
} // namespace app::classes::types
