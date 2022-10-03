#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int16TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int16TypeInfo__Class** type_info;
        inline app::Int16TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int16TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int16TypeInfo");
        }
        inline app::Int16TypeInfo* create() {
            return il2cpp::create_object<app::Int16TypeInfo>(get_class());
        }
    } // namespace Int16TypeInfo
} // namespace app::classes::types
