#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallSiteOps {
        namespace {
            app::CallSiteOps__Class* type_info_ref = nullptr;
        }
        app::CallSiteOps__Class** type_info = &type_info_ref;
        inline app::CallSiteOps__Class* get_class() {
            return il2cpp::get_class<app::CallSiteOps__Class>(type_info, "System.Runtime.CompilerServices", "CallSiteOps");
        }
        inline app::CallSiteOps* create() {
            return il2cpp::create_object<app::CallSiteOps>(get_class());
        }
    } // namespace CallSiteOps
} // namespace app::classes::types
