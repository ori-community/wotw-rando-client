#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharTypeInfo__Class** type_info;
        inline app::CharTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "CharTypeInfo");
        }
        inline app::CharTypeInfo* create() {
            return il2cpp::create_object<app::CharTypeInfo>(get_class());
        }
    } // namespace CharTypeInfo
} // namespace app::classes::types
