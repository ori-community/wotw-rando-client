#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Comparer_1 {
        inline app::Comparer_1__Class** type_info = (app::Comparer_1__Class**)(modloader::win::memory::resolve_rva(0x04788778));
        inline app::Comparer_1__Class* get_class() {
            return il2cpp::get_class<app::Comparer_1__Class>(type_info, "System.Net", "Comparer");
        }
        inline app::Comparer_1* create() {
            return il2cpp::create_object<app::Comparer_1>(get_class());
        }
    } // namespace Comparer_1
} // namespace app::classes::types
