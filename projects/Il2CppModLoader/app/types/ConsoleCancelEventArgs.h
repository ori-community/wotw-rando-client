#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsoleCancelEventArgs {
        inline app::ConsoleCancelEventArgs__Class** type_info = (app::ConsoleCancelEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476C328));
        inline app::ConsoleCancelEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ConsoleCancelEventArgs__Class>(type_info, "System", "ConsoleCancelEventArgs");
        }
        inline app::ConsoleCancelEventArgs* create() {
            return il2cpp::create_object<app::ConsoleCancelEventArgs>(get_class());
        }
    } // namespace ConsoleCancelEventArgs
} // namespace app::classes::types
