#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityLogWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityLogWriter__Class** type_info;
        inline app::UnityLogWriter__Class* get_class() {
            return il2cpp::get_class<app::UnityLogWriter__Class>(type_info, "UnityEngine", "UnityLogWriter");
        }
        inline app::UnityLogWriter* create() {
            return il2cpp::create_object<app::UnityLogWriter>(get_class());
        }
    } // namespace UnityLogWriter
} // namespace app::classes::types
