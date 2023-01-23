#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyUpdate_PresentBeforeUpdate__Class.h>
#include <Modloader/app/structs/EarlyUpdate_PresentBeforeUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_PresentBeforeUpdate__Boxed.h>

namespace app::classes::types {
    namespace EarlyUpdate_PresentBeforeUpdate {
        namespace {
            inline app::EarlyUpdate_PresentBeforeUpdate__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_PresentBeforeUpdate__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_PresentBeforeUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PresentBeforeUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PresentBeforeUpdate");
        }
        inline app::EarlyUpdate_PresentBeforeUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_PresentBeforeUpdate>(get_class());
        }
        inline app::EarlyUpdate_PresentBeforeUpdate__Boxed* box(app::EarlyUpdate_PresentBeforeUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_PresentBeforeUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PresentBeforeUpdate
} // namespace app::classes::types
