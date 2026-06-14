#pragma once
#include <Modloader/app/structs/XalService_AsyncQueueCallbackType__Enum.h>
#include <Modloader/app/structs/XalService_AsyncQueueCallbackType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_AsyncQueueCallbackType__Enum {
        inline app::XalService_AsyncQueueCallbackType__Enum__Class** type_info() {
            static app::XalService_AsyncQueueCallbackType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalService_AsyncQueueCallbackType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalService_AsyncQueueCallbackType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncQueueCallbackType__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "AsyncQueueCallbackType");
        }
        inline app::XalService_AsyncQueueCallbackType__Enum* create() {
            return il2cpp::create_object<app::XalService_AsyncQueueCallbackType__Enum>(get_class());
        }
    } // namespace XalService_AsyncQueueCallbackType__Enum
} // namespace app::classes::types
