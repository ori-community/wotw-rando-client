#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalCodePageDataItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalCodePageDataItem__Array__Class** type_info;
        inline app::InternalCodePageDataItem__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalCodePageDataItem__Array__Class>(type_info, "System.Globalization", "InternalCodePageDataItem[]");
        }
        inline app::InternalCodePageDataItem__Array* create() {
            return il2cpp::create_object<app::InternalCodePageDataItem__Array>(get_class());
        }
    } // namespace InternalCodePageDataItem__Array
} // namespace app::classes::types
