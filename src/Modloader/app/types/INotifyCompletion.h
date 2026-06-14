#pragma once
#include <Modloader/app/structs/INotifyCompletion.h>
#include <Modloader/app/structs/INotifyCompletion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INotifyCompletion {
        inline app::INotifyCompletion__Class** type_info() {
            static app::INotifyCompletion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x0476BB68));
            }
            return cache;
        }
        inline app::INotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::INotifyCompletion__Class>(type_info(), "System.Runtime.CompilerServices", "INotifyCompletion");
        }
    } // namespace INotifyCompletion
} // namespace app::classes::types
