#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForSecondsRealtime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForSecondsRealtime__Class** type_info;
        inline app::WaitForSecondsRealtime__Class* get_class() {
            return il2cpp::get_class<app::WaitForSecondsRealtime__Class>(type_info, "UnityEngine", "WaitForSecondsRealtime");
        }
        inline app::WaitForSecondsRealtime* create() {
            return il2cpp::create_object<app::WaitForSecondsRealtime>(get_class());
        }
    } // namespace WaitForSecondsRealtime
} // namespace app::classes::types
