#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Task {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Task__Class** type_info;
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
