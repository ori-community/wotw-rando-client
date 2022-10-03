#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuidArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GuidArrayTypeInfo__Class** type_info;
        inline app::GuidArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::GuidArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "GuidArrayTypeInfo");
        }
        inline app::GuidArrayTypeInfo* create() {
            return il2cpp::create_object<app::GuidArrayTypeInfo>(get_class());
        }
    } // namespace GuidArrayTypeInfo
} // namespace app::classes::types
