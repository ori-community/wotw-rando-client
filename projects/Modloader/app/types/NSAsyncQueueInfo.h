#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NSAsyncQueueInfo__Class.h>
#include <Modloader/app/structs/NSAsyncQueueInfo.h>
#include <Modloader/app/structs/NSAsyncQueueInfo__Array.h>

namespace app::classes::types {
    namespace NSAsyncQueueInfo {
        inline app::NSAsyncQueueInfo__Class** type_info = (app::NSAsyncQueueInfo__Class**)(modloader::win::memory::resolve_rva(0x04709018));
        inline app::NSAsyncQueueInfo__Class* get_class() {
            return il2cpp::get_class<app::NSAsyncQueueInfo__Class>(type_info, "", "NSAsyncQueueInfo");
        }
        inline app::NSAsyncQueueInfo* create() {
            return il2cpp::create_object<app::NSAsyncQueueInfo>(get_class());
        }
        inline app::NSAsyncQueueInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::NSAsyncQueueInfo__Array>(get_class(), size);
        }
        inline app::NSAsyncQueueInfo__Array* create_array(const std::vector<app::NSAsyncQueueInfo*>& items) {
            return il2cpp::array_new<app::NSAsyncQueueInfo__Array>(get_class(), items);
        }
    } // namespace NSAsyncQueueInfo
} // namespace app::classes::types
