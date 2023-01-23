#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAsyncStateMachine__Class.h>

namespace app::classes::types {
    namespace IAsyncStateMachine {
        inline app::IAsyncStateMachine__Class** type_info = (app::IAsyncStateMachine__Class**)(modloader::win::memory::resolve_rva(0x04786AC8));
        inline app::IAsyncStateMachine__Class* get_class() {
            return il2cpp::get_class<app::IAsyncStateMachine__Class>(type_info, "System.Runtime.CompilerServices", "IAsyncStateMachine");
        }
    } // namespace IAsyncStateMachine
} // namespace app::classes::types
