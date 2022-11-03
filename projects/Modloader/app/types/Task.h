#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task {
        inline app::Task__Class** type_info = (app::Task__Class**)(modloader::win::memory::resolve_rva(0x04748110));
        inline app::Task__Class* get_class() {
            return il2cpp::get_class<app::Task__Class>(type_info, "System.Threading.Tasks", "Task");
        }
        inline app::Task* create() {
            return il2cpp::create_object<app::Task>(get_class());
        }
        inline app::Task__Array* create_array(int size) {
            return il2cpp::array_new<app::Task__Array>(get_class(), size);
        }
        inline app::Task__Array* create_array(const std::vector<app::Task*>& items) {
            return il2cpp::array_new<app::Task__Array>(get_class(), items);
        }
    } // namespace Task
} // namespace app::classes::types
