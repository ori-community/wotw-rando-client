#pragma once
#include <Modloader/app/structs/RealProxy.h>
#include <Modloader/app/structs/RealProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RealProxy {
        inline app::RealProxy__Class** type_info() {
            static app::RealProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RealProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RealProxy__Class* get_class() {
            return il2cpp::get_class<app::RealProxy__Class>(type_info(), "System.Runtime.Remoting.Proxies", "RealProxy");
        }
        inline app::RealProxy* create() {
            return il2cpp::create_object<app::RealProxy>(get_class());
        }
    } // namespace RealProxy
} // namespace app::classes::types
