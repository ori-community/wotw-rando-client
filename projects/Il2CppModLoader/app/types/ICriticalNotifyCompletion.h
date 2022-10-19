#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICriticalNotifyCompletion {
        inline app::ICriticalNotifyCompletion__Class** type_info = (app::ICriticalNotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x047642A0));
        inline app::ICriticalNotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::ICriticalNotifyCompletion__Class>(type_info, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
        }
    } // namespace ICriticalNotifyCompletion
} // namespace app::classes::types
