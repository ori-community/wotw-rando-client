#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RealProxy {
        namespace {
            app::RealProxy__Class* type_info_ref = nullptr;
        }
        app::RealProxy__Class** type_info = &type_info_ref;
        inline app::RealProxy__Class* get_class() {
            return il2cpp::get_class<app::RealProxy__Class>(type_info, "System.Runtime.Remoting.Proxies", "RealProxy");
        }
        inline app::RealProxy* create() {
            return il2cpp::create_object<app::RealProxy>(get_class());
        }
    } // namespace RealProxy
} // namespace app::classes::types
