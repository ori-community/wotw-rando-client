#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SDK_XBL {
        namespace {
            app::SDK_XBL__Class* type_info_ref = nullptr;
        }
        app::SDK_XBL__Class** type_info = &type_info_ref;
        inline app::SDK_XBL__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL__Class>(type_info, "XGamingRuntime", "SDK", "XBL");
        }
        inline app::SDK_XBL* create() {
            return il2cpp::create_object<app::SDK_XBL>(get_class());
        }
    } // namespace SDK_XBL
} // namespace app::classes::types
