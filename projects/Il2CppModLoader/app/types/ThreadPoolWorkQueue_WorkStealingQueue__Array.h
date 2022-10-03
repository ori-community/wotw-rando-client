#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolWorkQueue_WorkStealingQueue__Array {
        namespace {
            app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* type_info_ref = nullptr;
        }
        app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class** type_info = &type_info_ref;
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolWorkQueue_WorkStealingQueue__Array__Class>(type_info, "System.Threading", "ThreadPoolWorkQueue+WorkStealingQueue[]");
        }
        inline app::ThreadPoolWorkQueue_WorkStealingQueue__Array* create() {
            return il2cpp::create_object<app::ThreadPoolWorkQueue_WorkStealingQueue__Array>(get_class());
        }
    } // namespace ThreadPoolWorkQueue_WorkStealingQueue__Array
} // namespace app::classes::types
