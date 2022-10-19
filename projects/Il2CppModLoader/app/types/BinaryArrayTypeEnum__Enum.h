#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryArrayTypeEnum__Enum {
        inline app::BinaryArrayTypeEnum__Enum__Class** type_info = (app::BinaryArrayTypeEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740F78));
        inline app::BinaryArrayTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryArrayTypeEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
        }
        inline app::BinaryArrayTypeEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryArrayTypeEnum__Enum>(get_class());
        }
    } // namespace BinaryArrayTypeEnum__Enum
} // namespace app::classes::types
