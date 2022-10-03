#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIntPtrTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UIntPtrTypeInfo__Class** type_info;
        inline app::UIntPtrTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UIntPtrTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UIntPtrTypeInfo");
        }
        inline app::UIntPtrTypeInfo* create() {
            return il2cpp::create_object<app::UIntPtrTypeInfo>(get_class());
        }
    } // namespace UIntPtrTypeInfo
} // namespace app::classes::types
