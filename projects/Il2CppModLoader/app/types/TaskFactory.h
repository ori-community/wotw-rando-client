#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskFactory__Class** type_info;
        inline app::TaskFactory__Class* get_class() {
            return il2cpp::get_class<app::TaskFactory__Class>(type_info, "System.Threading.Tasks", "TaskFactory");
        }
        inline app::TaskFactory* create() {
            return il2cpp::create_object<app::TaskFactory>(get_class());
        }
    } // namespace TaskFactory
} // namespace app::classes::types
