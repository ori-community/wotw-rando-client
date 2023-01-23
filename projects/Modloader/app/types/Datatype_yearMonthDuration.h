#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_yearMonthDuration__Class.h>
#include <Modloader/app/structs/Datatype_yearMonthDuration.h>

namespace app::classes::types {
    namespace Datatype_yearMonthDuration {
        inline app::Datatype_yearMonthDuration__Class** type_info = (app::Datatype_yearMonthDuration__Class**)(modloader::win::memory::resolve_rva(0x04703B08));
        inline app::Datatype_yearMonthDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonthDuration__Class>(type_info, "System.Xml.Schema", "Datatype_yearMonthDuration");
        }
        inline app::Datatype_yearMonthDuration* create() {
            return il2cpp::create_object<app::Datatype_yearMonthDuration>(get_class());
        }
    } // namespace Datatype_yearMonthDuration
} // namespace app::classes::types
