#pragma once
#include <Modloader/app/structs/ICriticalNotifyCompletion.h>
#include <Modloader/app/structs/ICriticalNotifyCompletion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICriticalNotifyCompletion {
        inline app::ICriticalNotifyCompletion__Class** type_info() {
            static app::ICriticalNotifyCompletion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICriticalNotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x047642A0));
            }
            return cache;
        }
        inline app::ICriticalNotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::ICriticalNotifyCompletion__Class>(type_info(), "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
        }
    } // namespace ICriticalNotifyCompletion
} // namespace app::classes::types
