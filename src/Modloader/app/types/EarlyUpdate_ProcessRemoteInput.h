#pragma once
#include <Modloader/app/structs/EarlyUpdate_ProcessRemoteInput.h>
#include <Modloader/app/structs/EarlyUpdate_ProcessRemoteInput__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_ProcessRemoteInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ProcessRemoteInput {
        inline app::EarlyUpdate_ProcessRemoteInput__Class** type_info() {
            static app::EarlyUpdate_ProcessRemoteInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_ProcessRemoteInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_ProcessRemoteInput__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ProcessRemoteInput__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ProcessRemoteInput");
        }
        inline app::EarlyUpdate_ProcessRemoteInput* create() {
            return il2cpp::create_object<app::EarlyUpdate_ProcessRemoteInput>(get_class());
        }
        inline app::EarlyUpdate_ProcessRemoteInput__Boxed* box(app::EarlyUpdate_ProcessRemoteInput value) {
            return il2cpp::box_value<app::EarlyUpdate_ProcessRemoteInput__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ProcessRemoteInput
} // namespace app::classes::types
