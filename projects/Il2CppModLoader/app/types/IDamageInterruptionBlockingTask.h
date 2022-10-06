#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageInterruptionBlockingTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageInterruptionBlockingTask__Class** type_info;
        inline app::IDamageInterruptionBlockingTask__Class* get_class() {
            return il2cpp::get_class<app::IDamageInterruptionBlockingTask__Class>(type_info, "Moon.BehaviourSystem", "IDamageInterruptionBlockingTask");
        }
        inline app::IDamageInterruptionBlockingTask__Array* create_array(int size) {
            return il2cpp::array_new<app::IDamageInterruptionBlockingTask__Array>(get_class(), size);
        }
        inline app::IDamageInterruptionBlockingTask__Array* create_array(const std::vector<app::IDamageInterruptionBlockingTask*>& items) {
            return il2cpp::array_new<app::IDamageInterruptionBlockingTask__Array>(get_class(), items);
        }
    } // namespace IDamageInterruptionBlockingTask
} // namespace app::classes::types
