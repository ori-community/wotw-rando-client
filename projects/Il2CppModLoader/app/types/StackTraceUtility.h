#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackTraceUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackTraceUtility__Class** type_info;
        inline app::StackTraceUtility__Class* get_class() {
            return il2cpp::get_class<app::StackTraceUtility__Class>(type_info, "UnityEngine", "StackTraceUtility");
        }
        inline app::StackTraceUtility* create() {
            return il2cpp::create_object<app::StackTraceUtility>(get_class());
        }
    } // namespace StackTraceUtility
} // namespace app::classes::types
