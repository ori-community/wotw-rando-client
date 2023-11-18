#pragma once
#include <Modloader/app/structs/PreLateUpdate_UpdateMasterServerInterface.h>
#include <Modloader/app/structs/PreLateUpdate_UpdateMasterServerInterface__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_UpdateMasterServerInterface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_UpdateMasterServerInterface {
        inline app::PreLateUpdate_UpdateMasterServerInterface__Class** type_info() {
            static app::PreLateUpdate_UpdateMasterServerInterface__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_UpdateMasterServerInterface__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_UpdateMasterServerInterface__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_UpdateMasterServerInterface__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "UpdateMasterServerInterface");
        }
        inline app::PreLateUpdate_UpdateMasterServerInterface* create() {
            return il2cpp::create_object<app::PreLateUpdate_UpdateMasterServerInterface>(get_class());
        }
        inline app::PreLateUpdate_UpdateMasterServerInterface__Boxed* box(app::PreLateUpdate_UpdateMasterServerInterface value) {
            return il2cpp::box_value<app::PreLateUpdate_UpdateMasterServerInterface__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_UpdateMasterServerInterface
} // namespace app::classes::types
