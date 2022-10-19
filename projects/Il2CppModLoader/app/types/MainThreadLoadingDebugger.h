#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MainThreadLoadingDebugger {
        inline app::MainThreadLoadingDebugger__Class** type_info = (app::MainThreadLoadingDebugger__Class**)(modloader::win::memory::resolve_rva(0x04712BC8));
        inline app::MainThreadLoadingDebugger__Class* get_class() {
            return il2cpp::get_class<app::MainThreadLoadingDebugger__Class>(type_info, "", "MainThreadLoadingDebugger");
        }
        inline app::MainThreadLoadingDebugger* create() {
            return il2cpp::create_object<app::MainThreadLoadingDebugger>(get_class());
        }
    } // namespace MainThreadLoadingDebugger
} // namespace app::classes::types
