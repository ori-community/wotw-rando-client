#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt16TypeInfo__Class** type_info;
        inline app::UInt16TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt16TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt16TypeInfo");
        }
        inline app::UInt16TypeInfo* create() {
            return il2cpp::create_object<app::UInt16TypeInfo>(get_class());
        }
    } // namespace UInt16TypeInfo
} // namespace app::classes::types
