#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt32ArrayTypeInfo__Class** type_info;
        inline app::UInt32ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt32ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt32ArrayTypeInfo");
        }
        inline app::UInt32ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt32ArrayTypeInfo>(get_class());
        }
    } // namespace UInt32ArrayTypeInfo
} // namespace app::classes::types
