#pragma once
#include <Modloader/app/structs/XTaskQueueDispatchMode__Enum.h>
#include <Modloader/app/structs/XTaskQueueDispatchMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTaskQueueDispatchMode__Enum {
        inline app::XTaskQueueDispatchMode__Enum__Class** type_info() {
            static app::XTaskQueueDispatchMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XTaskQueueDispatchMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XTaskQueueDispatchMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueDispatchMode__Enum__Class>(type_info(), "XGamingRuntime.Interop", "XTaskQueueDispatchMode");
        }
        inline app::XTaskQueueDispatchMode__Enum* create() {
            return il2cpp::create_object<app::XTaskQueueDispatchMode__Enum>(get_class());
        }
    } // namespace XTaskQueueDispatchMode__Enum
} // namespace app::classes::types
