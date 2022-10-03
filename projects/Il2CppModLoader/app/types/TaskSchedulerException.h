#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskSchedulerException__Class** type_info;
        inline app::TaskSchedulerException__Class* get_class() {
            return il2cpp::get_class<app::TaskSchedulerException__Class>(type_info, "System.Threading.Tasks", "TaskSchedulerException");
        }
        inline app::TaskSchedulerException* create() {
            return il2cpp::create_object<app::TaskSchedulerException>(get_class());
        }
    } // namespace TaskSchedulerException
} // namespace app::classes::types
