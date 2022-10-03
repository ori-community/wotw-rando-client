#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalEncodingDataItem__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalEncodingDataItem__Array__Class** type_info;
        inline app::InternalEncodingDataItem__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalEncodingDataItem__Array__Class>(type_info, "System.Globalization", "InternalEncodingDataItem[]");
        }
        inline app::InternalEncodingDataItem__Array* create() {
            return il2cpp::create_object<app::InternalEncodingDataItem__Array>(get_class());
        }
    } // namespace InternalEncodingDataItem__Array
} // namespace app::classes::types
