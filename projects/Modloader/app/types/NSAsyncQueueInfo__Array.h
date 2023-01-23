#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NSAsyncQueueInfo__Array__Class.h>
#include <Modloader/app/structs/NSAsyncQueueInfo__Array.h>

namespace app::classes::types {
    namespace NSAsyncQueueInfo__Array {
        namespace {
            inline app::NSAsyncQueueInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::NSAsyncQueueInfo__Array__Class** type_info = &type_info_ref;
        inline app::NSAsyncQueueInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::NSAsyncQueueInfo__Array__Class>(type_info, "", "NSAsyncQueueInfo[]");
        }
        inline app::NSAsyncQueueInfo__Array* create() {
            return il2cpp::create_object<app::NSAsyncQueueInfo__Array>(get_class());
        }
    } // namespace NSAsyncQueueInfo__Array
} // namespace app::classes::types
