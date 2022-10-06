#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_WorkStealingQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadPoolWorkQueue_WorkStealingQueue__Class** type_info;
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::ThreadPoolWorkQueue_WorkStealingQueue__Class>(type_info, "System.Threading", "ThreadPoolWorkQueue", "WorkStealingQueue");
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_WorkStealingQueue>(get_class());
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create_array(int size) {
            return il2cpp::array_new<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class(), size);
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create_array(const std::vector<app::ThreadPoolWorkQueue_WorkStealingQueue*>& items) {
            return il2cpp::array_new<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class(), items);
        }
    } // namespace ThreadPoolWorkQueue_WorkStealingQueue
} // namespace app::classes::types
