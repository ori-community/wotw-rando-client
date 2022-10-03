#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ProcessRemoteInput {
        namespace {
            app::EarlyUpdate_ProcessRemoteInput__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_ProcessRemoteInput__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_ProcessRemoteInput__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ProcessRemoteInput__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ProcessRemoteInput");
        }
        inline app::EarlyUpdate_ProcessRemoteInput* create() {
            return il2cpp::create_object<app::EarlyUpdate_ProcessRemoteInput>(get_class());
        }
        inline app::EarlyUpdate_ProcessRemoteInput__Boxed* box(app::EarlyUpdate_ProcessRemoteInput value) {
            return il2cpp::box_value<app::EarlyUpdate_ProcessRemoteInput__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ProcessRemoteInput
} // namespace app::classes::types
