#pragma once
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/IAsyncStateMachine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAsyncStateMachine {
        inline app::IAsyncStateMachine__Class** type_info() {
            static app::IAsyncStateMachine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAsyncStateMachine__Class**)(modloader::win::memory::resolve_rva(0x04786AC8));
            }
            return cache;
        }
        inline app::IAsyncStateMachine__Class* get_class() {
            return il2cpp::get_class<app::IAsyncStateMachine__Class>(type_info(), "System.Runtime.CompilerServices", "IAsyncStateMachine");
        }
    } // namespace IAsyncStateMachine
} // namespace app::classes::types
