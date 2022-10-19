#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DatatypeImplementation__Array {
        inline app::DatatypeImplementation__Array__Class** type_info = (app::DatatypeImplementation__Array__Class**)(modloader::win::memory::resolve_rva(0x04707B70));
        inline app::DatatypeImplementation__Array__Class* get_class() {
            return il2cpp::get_class<app::DatatypeImplementation__Array__Class>(type_info, "System.Xml.Schema", "DatatypeImplementation[]");
        }
        inline app::DatatypeImplementation__Array* create() {
            return il2cpp::create_object<app::DatatypeImplementation__Array>(get_class());
        }
    } // namespace DatatypeImplementation__Array
} // namespace app::classes::types
