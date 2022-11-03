#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreLateUpdate_UpdateNetworkManager {
        namespace {
            inline app::PreLateUpdate_UpdateNetworkManager__Class* type_info_ref = nullptr;
        }
        inline app::PreLateUpdate_UpdateNetworkManager__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_UpdateNetworkManager__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_UpdateNetworkManager__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "UpdateNetworkManager");
        }
        inline app::PreLateUpdate_UpdateNetworkManager* create() {
            return il2cpp::create_object<app::PreLateUpdate_UpdateNetworkManager>(get_class());
        }
        inline app::PreLateUpdate_UpdateNetworkManager__Boxed* box(app::PreLateUpdate_UpdateNetworkManager value) {
            return il2cpp::box_value<app::PreLateUpdate_UpdateNetworkManager__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_UpdateNetworkManager
} // namespace app::classes::types
