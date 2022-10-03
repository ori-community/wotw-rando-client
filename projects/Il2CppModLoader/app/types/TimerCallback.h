#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimerCallback__Class** type_info;
        inline app::TimerCallback__Class* get_class() {
            return il2cpp::get_class<app::TimerCallback__Class>(type_info, "System.Threading", "TimerCallback");
        }
        inline app::TimerCallback* create() {
            return il2cpp::create_object<app::TimerCallback>(get_class());
        }
    } // namespace TimerCallback
} // namespace app::classes::types
