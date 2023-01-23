#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreUpdate__Class.h>
#include <Modloader/app/structs/PreUpdate.h>
#include <Modloader/app/structs/PreUpdate__Boxed.h>

namespace app::classes::types {
    namespace PreUpdate {
        namespace {
            inline app::PreUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PreUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate__Class* get_class() {
            return il2cpp::get_class<app::PreUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate");
        }
        inline app::PreUpdate* create() {
            return il2cpp::create_object<app::PreUpdate>(get_class());
        }
        inline app::PreUpdate__Boxed* box(app::PreUpdate value) {
            return il2cpp::box_value<app::PreUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate
} // namespace app::classes::types
