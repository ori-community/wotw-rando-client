#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntPtrTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntPtrTypeInfo__Class** type_info;
        inline app::IntPtrTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "IntPtrTypeInfo");
        }
        inline app::IntPtrTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrTypeInfo>(get_class());
        }
    } // namespace IntPtrTypeInfo
} // namespace app::classes::types
