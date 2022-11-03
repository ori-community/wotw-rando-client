#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_AsyncQueueCallbackType__Enum {
        namespace {
            inline app::XalService_AsyncQueueCallbackType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XalService_AsyncQueueCallbackType__Enum__Class** type_info = &type_info_ref;
        inline app::XalService_AsyncQueueCallbackType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncQueueCallbackType__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "AsyncQueueCallbackType");
        }
        inline app::XalService_AsyncQueueCallbackType__Enum* create() {
            return il2cpp::create_object<app::XalService_AsyncQueueCallbackType__Enum>(get_class());
        }
    } // namespace XalService_AsyncQueueCallbackType__Enum
} // namespace app::classes::types
