#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_positiveInteger {
        inline app::Datatype_positiveInteger__Class** type_info = (app::Datatype_positiveInteger__Class**)(modloader::win::memory::resolve_rva(0x0474BC20));
        inline app::Datatype_positiveInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_positiveInteger__Class>(type_info, "System.Xml.Schema", "Datatype_positiveInteger");
        }
        inline app::Datatype_positiveInteger* create() {
            return il2cpp::create_object<app::Datatype_positiveInteger>(get_class());
        }
    } // namespace Datatype_positiveInteger
} // namespace app::classes::types
