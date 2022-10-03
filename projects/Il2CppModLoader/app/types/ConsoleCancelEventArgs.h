#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleCancelEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsoleCancelEventArgs__Class** type_info;
        inline app::ConsoleCancelEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ConsoleCancelEventArgs__Class>(type_info, "System", "ConsoleCancelEventArgs");
        }
        inline app::ConsoleCancelEventArgs* create() {
            return il2cpp::create_object<app::ConsoleCancelEventArgs>(get_class());
        }
    } // namespace ConsoleCancelEventArgs
} // namespace app::classes::types
