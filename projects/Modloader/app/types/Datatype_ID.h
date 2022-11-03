#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_ID {
        inline app::Datatype_ID__Class** type_info = (app::Datatype_ID__Class**)(modloader::win::memory::resolve_rva(0x04751640));
        inline app::Datatype_ID__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ID__Class>(type_info, "System.Xml.Schema", "Datatype_ID");
        }
        inline app::Datatype_ID* create() {
            return il2cpp::create_object<app::Datatype_ID>(get_class());
        }
    } // namespace Datatype_ID
} // namespace app::classes::types
