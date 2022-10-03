#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_DispatchEventQueueEvents {
        namespace {
            app::EarlyUpdate_DispatchEventQueueEvents__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_DispatchEventQueueEvents__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_DispatchEventQueueEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_DispatchEventQueueEvents__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "DispatchEventQueueEvents");
        }
        inline app::EarlyUpdate_DispatchEventQueueEvents* create() {
            return il2cpp::create_object<app::EarlyUpdate_DispatchEventQueueEvents>(get_class());
        }
        inline app::EarlyUpdate_DispatchEventQueueEvents__Boxed* box(app::EarlyUpdate_DispatchEventQueueEvents value) {
            return il2cpp::box_value<app::EarlyUpdate_DispatchEventQueueEvents__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_DispatchEventQueueEvents
} // namespace app::classes::types
