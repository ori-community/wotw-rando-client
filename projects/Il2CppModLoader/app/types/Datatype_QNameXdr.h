#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_QNameXdr {
        inline app::Datatype_QNameXdr__Class** type_info = (app::Datatype_QNameXdr__Class**)(modloader::win::memory::resolve_rva(0x0478CC30));
        inline app::Datatype_QNameXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_QNameXdr__Class>(type_info, "System.Xml.Schema", "Datatype_QNameXdr");
        }
        inline app::Datatype_QNameXdr* create() {
            return il2cpp::create_object<app::Datatype_QNameXdr>(get_class());
        }
    } // namespace Datatype_QNameXdr
} // namespace app::classes::types
