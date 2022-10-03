#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingleArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SingleArrayTypeInfo__Class** type_info;
        inline app::SingleArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SingleArrayTypeInfo");
        }
        inline app::SingleArrayTypeInfo* create() {
            return il2cpp::create_object<app::SingleArrayTypeInfo>(get_class());
        }
    } // namespace SingleArrayTypeInfo
} // namespace app::classes::types
