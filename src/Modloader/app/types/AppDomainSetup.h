#pragma once
#include <Modloader/app/structs/AppDomainSetup.h>
#include <Modloader/app/structs/AppDomainSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppDomainSetup {
        inline app::AppDomainSetup__Class** type_info() {
            static app::AppDomainSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AppDomainSetup__Class**)(modloader::win::memory::resolve_rva(0x04795D88));
            }
            return cache;
        }
        inline app::AppDomainSetup__Class* get_class() {
            return il2cpp::get_class<app::AppDomainSetup__Class>(type_info(), "System", "AppDomainSetup");
        }
        inline app::AppDomainSetup* create() {
            return il2cpp::create_object<app::AppDomainSetup>(get_class());
        }
    } // namespace AppDomainSetup
} // namespace app::classes::types
