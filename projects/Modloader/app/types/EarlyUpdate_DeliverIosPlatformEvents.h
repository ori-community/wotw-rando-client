#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyUpdate_DeliverIosPlatformEvents__Class.h>
#include <Modloader/app/structs/EarlyUpdate_DeliverIosPlatformEvents.h>
#include <Modloader/app/structs/EarlyUpdate_DeliverIosPlatformEvents__Boxed.h>

namespace app::classes::types {
    namespace EarlyUpdate_DeliverIosPlatformEvents {
        namespace {
            inline app::EarlyUpdate_DeliverIosPlatformEvents__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_DeliverIosPlatformEvents__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_DeliverIosPlatformEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_DeliverIosPlatformEvents__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "DeliverIosPlatformEvents");
        }
        inline app::EarlyUpdate_DeliverIosPlatformEvents* create() {
            return il2cpp::create_object<app::EarlyUpdate_DeliverIosPlatformEvents>(get_class());
        }
        inline app::EarlyUpdate_DeliverIosPlatformEvents__Boxed* box(app::EarlyUpdate_DeliverIosPlatformEvents value) {
            return il2cpp::box_value<app::EarlyUpdate_DeliverIosPlatformEvents__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_DeliverIosPlatformEvents
} // namespace app::classes::types
