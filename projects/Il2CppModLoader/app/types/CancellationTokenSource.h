#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancellationTokenSource {
        inline app::CancellationTokenSource__Class** type_info = (app::CancellationTokenSource__Class**)(modloader::win::memory::resolve_rva(0x0477A518));
        inline app::CancellationTokenSource__Class* get_class() {
            return il2cpp::get_class<app::CancellationTokenSource__Class>(type_info, "System.Threading", "CancellationTokenSource");
        }
        inline app::CancellationTokenSource* create() {
            return il2cpp::create_object<app::CancellationTokenSource>(get_class());
        }
    } // namespace CancellationTokenSource
} // namespace app::classes::types
