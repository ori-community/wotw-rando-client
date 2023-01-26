#pragma once
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/ITask__Array.h>
#include <Modloader/app/structs/ITask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITask {
        inline app::ITask__Class** type_info() {
            static app::ITask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITask__Class**)(modloader::win::memory::resolve_rva(0x04766EC0));
            }
            return cache;
        }
        inline app::ITask__Class* get_class() {
            return il2cpp::get_class<app::ITask__Class>(type_info(), "Moon.BehaviourSystem", "ITask");
        }
        inline app::ITask__Array* create_array(int size) {
            return il2cpp::array_new<app::ITask__Array>(get_class(), size);
        }
        inline app::ITask__Array* create_array(const std::vector<app::ITask*>& items) {
            return il2cpp::array_new<app::ITask__Array>(get_class(), items);
        }
    } // namespace ITask
} // namespace app::classes::types
