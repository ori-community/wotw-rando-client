#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace INotifyCompletion {
        inline app::INotifyCompletion__Class** type_info = (app::INotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x0476BB68));
        inline app::INotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::INotifyCompletion__Class>(type_info, "System.Runtime.CompilerServices", "INotifyCompletion");
        }
    } // namespace INotifyCompletion
} // namespace app::classes::types
