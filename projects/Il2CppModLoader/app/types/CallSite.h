#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallSite {
        namespace {
            app::CallSite__Class* type_info_ref = nullptr;
        }
        app::CallSite__Class** type_info = &type_info_ref;
        inline app::CallSite__Class* get_class() {
            return il2cpp::get_class<app::CallSite__Class>(type_info, "System.Runtime.CompilerServices", "CallSite");
        }
        inline app::CallSite* create() {
            return il2cpp::create_object<app::CallSite>(get_class());
        }
    } // namespace CallSite
} // namespace app::classes::types
