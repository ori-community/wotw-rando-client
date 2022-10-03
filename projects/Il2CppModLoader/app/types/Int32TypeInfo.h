#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32TypeInfo__Class** type_info;
        inline app::Int32TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int32TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int32TypeInfo");
        }
        inline app::Int32TypeInfo* create() {
            return il2cpp::create_object<app::Int32TypeInfo>(get_class());
        }
    } // namespace Int32TypeInfo
} // namespace app::classes::types
