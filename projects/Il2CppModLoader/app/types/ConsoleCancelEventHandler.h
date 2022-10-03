#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleCancelEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsoleCancelEventHandler__Class** type_info;
        inline app::ConsoleCancelEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ConsoleCancelEventHandler__Class>(type_info, "System", "ConsoleCancelEventHandler");
        }
        inline app::ConsoleCancelEventHandler* create() {
            return il2cpp::create_object<app::ConsoleCancelEventHandler>(get_class());
        }
    } // namespace ConsoleCancelEventHandler
} // namespace app::classes::types
