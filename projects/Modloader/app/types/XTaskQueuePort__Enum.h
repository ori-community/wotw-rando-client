#pragma once
#include <Modloader/app/structs/XTaskQueuePort__Enum.h>
#include <Modloader/app/structs/XTaskQueuePort__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTaskQueuePort__Enum {
        inline app::XTaskQueuePort__Enum__Class** type_info() {
            static app::XTaskQueuePort__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XTaskQueuePort__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XTaskQueuePort__Enum__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueuePort__Enum__Class>(type_info(), "XGamingRuntime.Interop", "XTaskQueuePort");
        }
        inline app::XTaskQueuePort__Enum* create() {
            return il2cpp::create_object<app::XTaskQueuePort__Enum>(get_class());
        }
    } // namespace XTaskQueuePort__Enum
} // namespace app::classes::types
