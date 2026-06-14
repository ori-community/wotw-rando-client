#pragma once
#include <Modloader/app/structs/EarlyUpdate_UpdateInputManager.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateInputManager__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_UpdateInputManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateInputManager {
        inline app::EarlyUpdate_UpdateInputManager__Class** type_info() {
            static app::EarlyUpdate_UpdateInputManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_UpdateInputManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_UpdateInputManager__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateInputManager__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateInputManager");
        }
        inline app::EarlyUpdate_UpdateInputManager* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateInputManager>(get_class());
        }
        inline app::EarlyUpdate_UpdateInputManager__Boxed* box(app::EarlyUpdate_UpdateInputManager value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateInputManager__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateInputManager
} // namespace app::classes::types
