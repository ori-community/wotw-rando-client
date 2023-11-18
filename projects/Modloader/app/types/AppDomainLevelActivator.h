#pragma once
#include <Modloader/app/structs/AppDomainLevelActivator.h>
#include <Modloader/app/structs/AppDomainLevelActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppDomainLevelActivator {
        inline app::AppDomainLevelActivator__Class** type_info() {
            static app::AppDomainLevelActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AppDomainLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0474E7B8));
            }
            return cache;
        }
        inline app::AppDomainLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::AppDomainLevelActivator__Class>(type_info(), "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
        }
        inline app::AppDomainLevelActivator* create() {
            return il2cpp::create_object<app::AppDomainLevelActivator>(get_class());
        }
    } // namespace AppDomainLevelActivator
} // namespace app::classes::types
