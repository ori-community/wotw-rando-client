#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RealProxy {
        namespace {
            inline app::RealProxy__Class* type_info_ref = nullptr;
        }
        inline app::RealProxy__Class** type_info = &type_info_ref;
        inline app::RealProxy__Class* get_class() {
            return il2cpp::get_class<app::RealProxy__Class>(type_info, "System.Runtime.Remoting.Proxies", "RealProxy");
        }
        inline app::RealProxy* create() {
            return il2cpp::create_object<app::RealProxy>(get_class());
        }
    } // namespace RealProxy
} // namespace app::classes::types
