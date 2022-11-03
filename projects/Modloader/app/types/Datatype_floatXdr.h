#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_floatXdr {
        inline app::Datatype_floatXdr__Class** type_info = (app::Datatype_floatXdr__Class**)(modloader::win::memory::resolve_rva(0x04745C00));
        inline app::Datatype_floatXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_floatXdr__Class>(type_info, "System.Xml.Schema", "Datatype_floatXdr");
        }
        inline app::Datatype_floatXdr* create() {
            return il2cpp::create_object<app::Datatype_floatXdr>(get_class());
        }
    } // namespace Datatype_floatXdr
} // namespace app::classes::types
