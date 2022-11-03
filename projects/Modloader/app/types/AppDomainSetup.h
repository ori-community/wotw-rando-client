#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppDomainSetup {
        inline app::AppDomainSetup__Class** type_info = (app::AppDomainSetup__Class**)(modloader::win::memory::resolve_rva(0x04795D88));
        inline app::AppDomainSetup__Class* get_class() {
            return il2cpp::get_class<app::AppDomainSetup__Class>(type_info, "System", "AppDomainSetup");
        }
        inline app::AppDomainSetup* create() {
            return il2cpp::create_object<app::AppDomainSetup>(get_class());
        }
    } // namespace AppDomainSetup
} // namespace app::classes::types
