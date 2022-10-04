#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITask__Class** type_info;
        inline app::ITask__Class* get_class() {
            return il2cpp::get_class<app::ITask__Class>(type_info, "Moon.BehaviourSystem", "ITask");
        }
        inline app::ITask__Array* create_array(int size) {
            return il2cpp::array_new<app::ITask__Array>(get_class(), size);
        }
    } // namespace ITask
} // namespace app::classes::types
