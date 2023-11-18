#pragma once
#include <Modloader/app/structs/MainThreadLoadingDebugger_c.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadLoadingDebugger_c {
        inline app::MainThreadLoadingDebugger_c__Class** type_info() {
            static app::MainThreadLoadingDebugger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MainThreadLoadingDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0470A0A8));
            }
            return cache;
        }
        inline app::MainThreadLoadingDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MainThreadLoadingDebugger_c__Class>(type_info(), "", "MainThreadLoadingDebugger", "<>c");
        }
        inline app::MainThreadLoadingDebugger_c* create() {
            return il2cpp::create_object<app::MainThreadLoadingDebugger_c>(get_class());
        }
    } // namespace MainThreadLoadingDebugger_c
} // namespace app::classes::types
