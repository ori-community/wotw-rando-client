#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_integer {
        inline app::Datatype_integer__Class** type_info = (app::Datatype_integer__Class**)(modloader::win::memory::resolve_rva(0x04781D60));
        inline app::Datatype_integer__Class* get_class() {
            return il2cpp::get_class<app::Datatype_integer__Class>(type_info, "System.Xml.Schema", "Datatype_integer");
        }
        inline app::Datatype_integer* create() {
            return il2cpp::create_object<app::Datatype_integer>(get_class());
        }
    } // namespace Datatype_integer
} // namespace app::classes::types
