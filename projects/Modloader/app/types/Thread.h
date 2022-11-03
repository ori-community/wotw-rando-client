#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Thread {
        inline app::Thread__Class** type_info = (app::Thread__Class**)(modloader::win::memory::resolve_rva(0x04730070));
        inline app::Thread__Class* get_class() {
            return il2cpp::get_class<app::Thread__Class>(type_info, "System.Threading", "Thread");
        }
        inline app::Thread* create() {
            return il2cpp::create_object<app::Thread>(get_class());
        }
        inline app::Thread__Array* create_array(int size) {
            return il2cpp::array_new<app::Thread__Array>(get_class(), size);
        }
        inline app::Thread__Array* create_array(const std::vector<app::Thread*>& items) {
            return il2cpp::array_new<app::Thread__Array>(get_class(), items);
        }
    } // namespace Thread
} // namespace app::classes::types
