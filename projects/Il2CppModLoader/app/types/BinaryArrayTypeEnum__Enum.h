#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryArrayTypeEnum__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryArrayTypeEnum__Enum__Class** type_info;
        inline app::BinaryArrayTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryArrayTypeEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
        }
        inline app::BinaryArrayTypeEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryArrayTypeEnum__Enum>(get_class());
        }
    } // namespace BinaryArrayTypeEnum__Enum
} // namespace app::classes::types
