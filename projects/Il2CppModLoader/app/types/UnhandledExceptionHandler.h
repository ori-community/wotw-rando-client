#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnhandledExceptionHandler {
        inline app::UnhandledExceptionHandler__Class** type_info = (app::UnhandledExceptionHandler__Class**)(modloader::win::memory::resolve_rva(0x0470B9B0));
        inline app::UnhandledExceptionHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionHandler__Class>(type_info, "UnityEngine", "UnhandledExceptionHandler");
        }
        inline app::UnhandledExceptionHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionHandler>(get_class());
        }
    } // namespace UnhandledExceptionHandler
} // namespace app::classes::types
