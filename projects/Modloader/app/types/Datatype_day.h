#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_day__Class.h>
#include <Modloader/app/structs/Datatype_day.h>

namespace app::classes::types {
    namespace Datatype_day {
        inline app::Datatype_day__Class** type_info = (app::Datatype_day__Class**)(modloader::win::memory::resolve_rva(0x04703D18));
        inline app::Datatype_day__Class* get_class() {
            return il2cpp::get_class<app::Datatype_day__Class>(type_info, "System.Xml.Schema", "Datatype_day");
        }
        inline app::Datatype_day* create() {
            return il2cpp::create_object<app::Datatype_day>(get_class());
        }
    } // namespace Datatype_day
} // namespace app::classes::types
