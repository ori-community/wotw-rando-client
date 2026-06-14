#pragma once
#include <Modloader/app/structs/NSAsyncQueueInfo__Array.h>
#include <Modloader/app/structs/NSAsyncQueueInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NSAsyncQueueInfo__Array {
        inline app::NSAsyncQueueInfo__Array__Class** type_info() {
            static app::NSAsyncQueueInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NSAsyncQueueInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NSAsyncQueueInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::NSAsyncQueueInfo__Array__Class>(type_info(), "", "NSAsyncQueueInfo[]");
        }
        inline app::NSAsyncQueueInfo__Array* create() {
            return il2cpp::create_object<app::NSAsyncQueueInfo__Array>(get_class());
        }
    } // namespace NSAsyncQueueInfo__Array
} // namespace app::classes::types
