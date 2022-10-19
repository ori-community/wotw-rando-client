#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalPrimitiveTypeE__Enum__Array {
        inline app::InternalPrimitiveTypeE__Enum__Array__Class** type_info = (app::InternalPrimitiveTypeE__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04739AB0));
        inline app::InternalPrimitiveTypeE__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::InternalPrimitiveTypeE__Enum__Array__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE[]");
        }
        inline app::InternalPrimitiveTypeE__Enum__Array* create() {
            return il2cpp::create_object<app::InternalPrimitiveTypeE__Enum__Array>(get_class());
        }
    } // namespace InternalPrimitiveTypeE__Enum__Array
} // namespace app::classes::types
