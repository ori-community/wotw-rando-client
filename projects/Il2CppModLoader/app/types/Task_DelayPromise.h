#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Task_DelayPromise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Task_DelayPromise__Class** type_info;
        inline app::Task_DelayPromise__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_DelayPromise__Class>(type_info, "System.Threading.Tasks", "Task", "DelayPromise");
        }
        inline app::Task_DelayPromise* create() {
            return il2cpp::create_object<app::Task_DelayPromise>(get_class());
        }
    } // namespace Task_DelayPromise
} // namespace app::classes::types
