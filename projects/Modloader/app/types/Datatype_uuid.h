#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_uuid {
        inline app::Datatype_uuid__Class** type_info = (app::Datatype_uuid__Class**)(modloader::win::memory::resolve_rva(0x04738420));
        inline app::Datatype_uuid__Class* get_class() {
            return il2cpp::get_class<app::Datatype_uuid__Class>(type_info, "System.Xml.Schema", "Datatype_uuid");
        }
        inline app::Datatype_uuid* create() {
            return il2cpp::create_object<app::Datatype_uuid>(get_class());
        }
    } // namespace Datatype_uuid
} // namespace app::classes::types
