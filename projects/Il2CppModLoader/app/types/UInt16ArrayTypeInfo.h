#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt16ArrayTypeInfo__Class** type_info;
        inline app::UInt16ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt16ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt16ArrayTypeInfo");
        }
        inline app::UInt16ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt16ArrayTypeInfo>(get_class());
        }
    } // namespace UInt16ArrayTypeInfo
} // namespace app::classes::types
