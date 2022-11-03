#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_dateTimeTimeZone {
        inline app::Datatype_dateTimeTimeZone__Class** type_info = (app::Datatype_dateTimeTimeZone__Class**)(modloader::win::memory::resolve_rva(0x04728A88));
        inline app::Datatype_dateTimeTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeTimeZone__Class>(type_info, "System.Xml.Schema", "Datatype_dateTimeTimeZone");
        }
        inline app::Datatype_dateTimeTimeZone* create() {
            return il2cpp::create_object<app::Datatype_dateTimeTimeZone>(get_class());
        }
    } // namespace Datatype_dateTimeTimeZone
} // namespace app::classes::types
