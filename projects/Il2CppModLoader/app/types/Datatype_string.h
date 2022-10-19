#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_string {
        inline app::Datatype_string__Class** type_info = (app::Datatype_string__Class**)(modloader::win::memory::resolve_rva(0x04799368));
        inline app::Datatype_string__Class* get_class() {
            return il2cpp::get_class<app::Datatype_string__Class>(type_info, "System.Xml.Schema", "Datatype_string");
        }
        inline app::Datatype_string* create() {
            return il2cpp::create_object<app::Datatype_string>(get_class());
        }
    } // namespace Datatype_string
} // namespace app::classes::types
