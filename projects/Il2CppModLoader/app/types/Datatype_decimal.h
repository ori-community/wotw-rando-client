#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_decimal {
        inline app::Datatype_decimal__Class** type_info = (app::Datatype_decimal__Class**)(modloader::win::memory::resolve_rva(0x04783EA0));
        inline app::Datatype_decimal__Class* get_class() {
            return il2cpp::get_class<app::Datatype_decimal__Class>(type_info, "System.Xml.Schema", "Datatype_decimal");
        }
        inline app::Datatype_decimal* create() {
            return il2cpp::create_object<app::Datatype_decimal>(get_class());
        }
    } // namespace Datatype_decimal
} // namespace app::classes::types
