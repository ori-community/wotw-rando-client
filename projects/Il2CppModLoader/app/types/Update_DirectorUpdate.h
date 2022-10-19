#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Update_DirectorUpdate {
        namespace {
            inline app::Update_DirectorUpdate__Class* type_info_ref = nullptr;
        }
        inline app::Update_DirectorUpdate__Class** type_info = &type_info_ref;
        inline app::Update_DirectorUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_DirectorUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Update", "DirectorUpdate");
        }
        inline app::Update_DirectorUpdate* create() {
            return il2cpp::create_object<app::Update_DirectorUpdate>(get_class());
        }
        inline app::Update_DirectorUpdate__Boxed* box(app::Update_DirectorUpdate value) {
            return il2cpp::box_value<app::Update_DirectorUpdate__Boxed>(get_class(), value);
        }
    } // namespace Update_DirectorUpdate
} // namespace app::classes::types
