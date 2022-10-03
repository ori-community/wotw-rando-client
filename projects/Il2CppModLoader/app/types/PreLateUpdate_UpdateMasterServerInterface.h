#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_UpdateMasterServerInterface {
        namespace {
            app::PreLateUpdate_UpdateMasterServerInterface__Class* type_info_ref = nullptr;
        }
        app::PreLateUpdate_UpdateMasterServerInterface__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_UpdateMasterServerInterface__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_UpdateMasterServerInterface__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "UpdateMasterServerInterface");
        }
        inline app::PreLateUpdate_UpdateMasterServerInterface* create() {
            return il2cpp::create_object<app::PreLateUpdate_UpdateMasterServerInterface>(get_class());
        }
        inline app::PreLateUpdate_UpdateMasterServerInterface__Boxed* box(app::PreLateUpdate_UpdateMasterServerInterface value) {
            return il2cpp::box_value<app::PreLateUpdate_UpdateMasterServerInterface__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_UpdateMasterServerInterface
} // namespace app::classes::types
