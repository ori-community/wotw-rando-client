#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGRInterop {
        namespace {
            app::XGRInterop__Class* type_info_ref = nullptr;
        }
        app::XGRInterop__Class** type_info = &type_info_ref;
        inline app::XGRInterop__Class* get_class() {
            return il2cpp::get_class<app::XGRInterop__Class>(type_info, "XGamingRuntime.Interop", "XGRInterop");
        }
        inline app::XGRInterop* create() {
            return il2cpp::create_object<app::XGRInterop>(get_class());
        }
    } // namespace XGRInterop
} // namespace app::classes::types
