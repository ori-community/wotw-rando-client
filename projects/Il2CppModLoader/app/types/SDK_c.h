#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SDK_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SDK_c__Class** type_info;
        inline app::SDK_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_c__Class>(type_info, "XGamingRuntime", "SDK", "<>c");
        }
        inline app::SDK_c* create() {
            return il2cpp::create_object<app::SDK_c>(get_class());
        }
    } // namespace SDK_c
} // namespace app::classes::types
