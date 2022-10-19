#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnexceptionalStreamReader {
        inline app::UnexceptionalStreamReader__Class** type_info = (app::UnexceptionalStreamReader__Class**)(modloader::win::memory::resolve_rva(0x047441A8));
        inline app::UnexceptionalStreamReader__Class* get_class() {
            return il2cpp::get_class<app::UnexceptionalStreamReader__Class>(type_info, "System.IO", "UnexceptionalStreamReader");
        }
        inline app::UnexceptionalStreamReader* create() {
            return il2cpp::create_object<app::UnexceptionalStreamReader>(get_class());
        }
    } // namespace UnexceptionalStreamReader
} // namespace app::classes::types
