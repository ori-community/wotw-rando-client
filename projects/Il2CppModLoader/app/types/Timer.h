#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Timer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Timer__Class** type_info;
        inline app::Timer__Class* get_class() {
            return il2cpp::get_class<app::Timer__Class>(type_info, "System.Threading", "Timer");
        }
        inline app::Timer* create() {
            return il2cpp::create_object<app::Timer>(get_class());
        }
        inline app::Timer__Array* create_array(int size) {
            return il2cpp::array_new<app::Timer__Array>(get_class(), size);
        }
        inline app::Timer__Array* create_array(const std::vector<app::Timer*>& items) {
            return il2cpp::array_new<app::Timer__Array>(get_class(), items);
        }
    } // namespace Timer
} // namespace app::classes::types
