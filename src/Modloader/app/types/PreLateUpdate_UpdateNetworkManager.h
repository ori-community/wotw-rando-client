#pragma once
#include <Modloader/app/structs/PreLateUpdate_UpdateNetworkManager.h>
#include <Modloader/app/structs/PreLateUpdate_UpdateNetworkManager__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_UpdateNetworkManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_UpdateNetworkManager {
        inline app::PreLateUpdate_UpdateNetworkManager__Class** type_info() {
            static app::PreLateUpdate_UpdateNetworkManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_UpdateNetworkManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_UpdateNetworkManager__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_UpdateNetworkManager__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "UpdateNetworkManager");
        }
        inline app::PreLateUpdate_UpdateNetworkManager* create() {
            return il2cpp::create_object<app::PreLateUpdate_UpdateNetworkManager>(get_class());
        }
        inline app::PreLateUpdate_UpdateNetworkManager__Boxed* box(app::PreLateUpdate_UpdateNetworkManager value) {
            return il2cpp::box_value<app::PreLateUpdate_UpdateNetworkManager__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_UpdateNetworkManager
} // namespace app::classes::types
