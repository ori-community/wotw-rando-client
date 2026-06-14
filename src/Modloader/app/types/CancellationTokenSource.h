#pragma once
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/CancellationTokenSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationTokenSource {
        inline app::CancellationTokenSource__Class** type_info() {
            static app::CancellationTokenSource__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellationTokenSource__Class**)(modloader::win::memory::resolve_rva(0x0477A518));
            }
            return cache;
        }
        inline app::CancellationTokenSource__Class* get_class() {
            return il2cpp::get_class<app::CancellationTokenSource__Class>(type_info(), "System.Threading", "CancellationTokenSource");
        }
        inline app::CancellationTokenSource* create() {
            return il2cpp::create_object<app::CancellationTokenSource>(get_class());
        }
    } // namespace CancellationTokenSource
} // namespace app::classes::types
