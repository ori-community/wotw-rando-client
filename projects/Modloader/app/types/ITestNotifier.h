#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITestNotifier {
        inline app::ITestNotifier__Class** type_info = (app::ITestNotifier__Class**)(modloader::win::memory::resolve_rva(0x04795C88));
        inline app::ITestNotifier__Class* get_class() {
            return il2cpp::get_class<app::ITestNotifier__Class>(type_info, "", "ITestNotifier");
        }
    } // namespace ITestNotifier
} // namespace app::classes::types
