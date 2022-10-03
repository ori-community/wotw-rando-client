#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingleTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SingleTypeInfo__Class** type_info;
        inline app::SingleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SingleTypeInfo");
        }
        inline app::SingleTypeInfo* create() {
            return il2cpp::create_object<app::SingleTypeInfo>(get_class());
        }
    } // namespace SingleTypeInfo
} // namespace app::classes::types
