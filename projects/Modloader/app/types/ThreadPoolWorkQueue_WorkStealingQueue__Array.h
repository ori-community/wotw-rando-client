#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array__Class.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_WorkStealingQueue__Array {
        namespace {
            inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* type_info_ref = nullptr;
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class** type_info = &type_info_ref;
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class>(type_info, "System.Threading", "ThreadPoolWorkQueue+WorkStealingQueue[]");
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class());
        }
    } // namespace ThreadPoolWorkQueue_WorkStealingQueue__Array
} // namespace app::classes::types
