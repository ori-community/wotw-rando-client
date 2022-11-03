#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_dayTimeDuration {
        inline app::Datatype_dayTimeDuration__Class** type_info = (app::Datatype_dayTimeDuration__Class**)(modloader::win::memory::resolve_rva(0x0470F140));
        inline app::Datatype_dayTimeDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dayTimeDuration__Class>(type_info, "System.Xml.Schema", "Datatype_dayTimeDuration");
        }
        inline app::Datatype_dayTimeDuration* create() {
            return il2cpp::create_object<app::Datatype_dayTimeDuration>(get_class());
        }
    } // namespace Datatype_dayTimeDuration
} // namespace app::classes::types
