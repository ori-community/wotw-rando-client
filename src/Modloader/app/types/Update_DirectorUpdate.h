#pragma once
#include <Modloader/app/structs/Update_DirectorUpdate.h>
#include <Modloader/app/structs/Update_DirectorUpdate__Boxed.h>
#include <Modloader/app/structs/Update_DirectorUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Update_DirectorUpdate {
        inline app::Update_DirectorUpdate__Class** type_info() {
            static app::Update_DirectorUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Update_DirectorUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Update_DirectorUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_DirectorUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Update", "DirectorUpdate");
        }
        inline app::Update_DirectorUpdate* create() {
            return il2cpp::create_object<app::Update_DirectorUpdate>(get_class());
        }
        inline app::Update_DirectorUpdate__Boxed* box(app::Update_DirectorUpdate value) {
            return il2cpp::box_value<app::Update_DirectorUpdate__Boxed>(get_class(), value);
        }
    } // namespace Update_DirectorUpdate
} // namespace app::classes::types
