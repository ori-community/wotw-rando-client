#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Thread {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Thread__Class** type_info;
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
