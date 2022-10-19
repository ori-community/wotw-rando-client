#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XSDSchema_NameType__Array {
        inline app::XSDSchema_NameType__Array__Class** type_info = (app::XSDSchema_NameType__Array__Class**)(modloader::win::memory::resolve_rva(0x04705468));
        inline app::XSDSchema_NameType__Array__Class* get_class() {
            return il2cpp::get_class<app::XSDSchema_NameType__Array__Class>(type_info, "System.Data", "XSDSchema+NameType[]");
        }
        inline app::XSDSchema_NameType__Array* create() {
            return il2cpp::create_object<app::XSDSchema_NameType__Array>(get_class());
        }
    } // namespace XSDSchema_NameType__Array
} // namespace app::classes::types
