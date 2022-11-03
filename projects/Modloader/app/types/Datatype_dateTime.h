#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_dateTime {
        inline app::Datatype_dateTime__Class** type_info = (app::Datatype_dateTime__Class**)(modloader::win::memory::resolve_rva(0x047892C8));
        inline app::Datatype_dateTime__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTime__Class>(type_info, "System.Xml.Schema", "Datatype_dateTime");
        }
        inline app::Datatype_dateTime* create() {
            return il2cpp::create_object<app::Datatype_dateTime>(get_class());
        }
    } // namespace Datatype_dateTime
} // namespace app::classes::types
