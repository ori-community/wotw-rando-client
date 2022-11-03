#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Update {
        namespace {
            inline app::Update__Class* type_info_ref = nullptr;
        }
        inline app::Update__Class** type_info = &type_info_ref;
        inline app::Update__Class* get_class() {
            return il2cpp::get_class<app::Update__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Update");
        }
        inline app::Update* create() {
            return il2cpp::create_object<app::Update>(get_class());
        }
        inline app::Update__Boxed* box(app::Update value) {
            return il2cpp::box_value<app::Update__Boxed>(get_class(), value);
        }
    } // namespace Update
} // namespace app::classes::types
