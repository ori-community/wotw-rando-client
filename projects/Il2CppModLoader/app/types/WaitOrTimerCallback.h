#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitOrTimerCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitOrTimerCallback__Class** type_info;
        inline app::WaitOrTimerCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitOrTimerCallback__Class>(type_info, "System.Threading", "WaitOrTimerCallback");
        }
        inline app::WaitOrTimerCallback* create() {
            return il2cpp::create_object<app::WaitOrTimerCallback>(get_class());
        }
    } // namespace WaitOrTimerCallback
} // namespace app::classes::types
