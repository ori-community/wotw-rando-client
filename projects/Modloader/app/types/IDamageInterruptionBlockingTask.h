#pragma once
#include <Modloader/app/structs/IDamageInterruptionBlockingTask.h>
#include <Modloader/app/structs/IDamageInterruptionBlockingTask__Array.h>
#include <Modloader/app/structs/IDamageInterruptionBlockingTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageInterruptionBlockingTask {
        inline app::IDamageInterruptionBlockingTask__Class** type_info() {
            static app::IDamageInterruptionBlockingTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageInterruptionBlockingTask__Class**)(modloader::win::memory::resolve_rva(0x0475B8A0));
            }
            return cache;
        }
        inline app::IDamageInterruptionBlockingTask__Class* get_class() {
            return il2cpp::get_class<app::IDamageInterruptionBlockingTask__Class>(type_info(), "Moon.BehaviourSystem", "IDamageInterruptionBlockingTask");
        }
        inline app::IDamageInterruptionBlockingTask__Array* create_array(int size) {
            return il2cpp::array_new<app::IDamageInterruptionBlockingTask__Array>(get_class(), size);
        }
        inline app::IDamageInterruptionBlockingTask__Array* create_array(const std::vector<app::IDamageInterruptionBlockingTask*>& items) {
            return il2cpp::array_new<app::IDamageInterruptionBlockingTask__Array>(get_class(), items);
        }
    } // namespace IDamageInterruptionBlockingTask
} // namespace app::classes::types
