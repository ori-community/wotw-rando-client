#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_nonNegativeInteger {
        inline app::Datatype_nonNegativeInteger__Class** type_info = (app::Datatype_nonNegativeInteger__Class**)(modloader::win::memory::resolve_rva(0x04758DD0));
        inline app::Datatype_nonNegativeInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_nonNegativeInteger__Class>(type_info, "System.Xml.Schema", "Datatype_nonNegativeInteger");
        }
        inline app::Datatype_nonNegativeInteger* create() {
            return il2cpp::create_object<app::Datatype_nonNegativeInteger>(get_class());
        }
    } // namespace Datatype_nonNegativeInteger
} // namespace app::classes::types
