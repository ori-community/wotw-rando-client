#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt32TypeInfo__Class** type_info;
        inline app::UInt32TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt32TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt32TypeInfo");
        }
        inline app::UInt32TypeInfo* create() {
            return il2cpp::create_object<app::UInt32TypeInfo>(get_class());
        }
    } // namespace UInt32TypeInfo
} // namespace app::classes::types
