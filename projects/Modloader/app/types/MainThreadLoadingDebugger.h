#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger__Class.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger.h>

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
