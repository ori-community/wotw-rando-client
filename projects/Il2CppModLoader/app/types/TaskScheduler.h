#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskScheduler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskScheduler__Class** type_info;
        inline app::TaskScheduler__Class* get_class() {
            return il2cpp::get_class<app::TaskScheduler__Class>(type_info, "System.Threading.Tasks", "TaskScheduler");
        }
        inline app::TaskScheduler* create() {
            return il2cpp::create_object<app::TaskScheduler>(get_class());
        }
    } // namespace TaskScheduler
} // namespace app::classes::types
