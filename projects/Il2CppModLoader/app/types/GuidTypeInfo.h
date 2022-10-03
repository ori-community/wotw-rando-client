#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuidTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GuidTypeInfo__Class** type_info;
        inline app::GuidTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::GuidTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "GuidTypeInfo");
        }
        inline app::GuidTypeInfo* create() {
            return il2cpp::create_object<app::GuidTypeInfo>(get_class());
        }
    } // namespace GuidTypeInfo
} // namespace app::classes::types
