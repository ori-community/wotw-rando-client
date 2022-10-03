#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDataType__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsDataType__Enum__Array__Class** type_info;
        inline app::fsDataType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::fsDataType__Enum__Array__Class>(type_info, "FullSerializer", "fsDataType[]");
        }
        inline app::fsDataType__Enum__Array* create() {
            return il2cpp::create_object<app::fsDataType__Enum__Array>(get_class());
        }
    } // namespace fsDataType__Enum__Array
} // namespace app::classes::types
