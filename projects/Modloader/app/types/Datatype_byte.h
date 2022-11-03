#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_byte {
        inline app::Datatype_byte__Class** type_info = (app::Datatype_byte__Class**)(modloader::win::memory::resolve_rva(0x04763790));
        inline app::Datatype_byte__Class* get_class() {
            return il2cpp::get_class<app::Datatype_byte__Class>(type_info, "System.Xml.Schema", "Datatype_byte");
        }
        inline app::Datatype_byte* create() {
            return il2cpp::create_object<app::Datatype_byte>(get_class());
        }
    } // namespace Datatype_byte
} // namespace app::classes::types
