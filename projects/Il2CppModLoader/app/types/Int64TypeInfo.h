#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int64TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int64TypeInfo__Class** type_info;
        inline app::Int64TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int64TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int64TypeInfo");
        }
        inline app::Int64TypeInfo* create() {
            return il2cpp::create_object<app::Int64TypeInfo>(get_class());
        }
    } // namespace Int64TypeInfo
} // namespace app::classes::types
