#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoTypeInfo__Class** type_info;
        inline app::MonoTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoTypeInfo__Class>(type_info, "System", "MonoTypeInfo");
        }
        inline app::MonoTypeInfo* create() {
            return il2cpp::create_object<app::MonoTypeInfo>(get_class());
        }
    } // namespace MonoTypeInfo
} // namespace app::classes::types
