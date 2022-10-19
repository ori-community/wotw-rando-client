#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventHandler {
        inline app::UnhandledExceptionEventHandler__Class** type_info = (app::UnhandledExceptionEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473D400));
        inline app::UnhandledExceptionEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventHandler__Class>(type_info, "System", "UnhandledExceptionEventHandler");
        }
        inline app::UnhandledExceptionEventHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventHandler>(get_class());
        }
    } // namespace UnhandledExceptionEventHandler
} // namespace app::classes::types
