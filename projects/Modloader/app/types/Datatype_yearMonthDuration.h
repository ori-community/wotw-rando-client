#pragma once
#include <Modloader/app/structs/Datatype_yearMonthDuration.h>
#include <Modloader/app/structs/Datatype_yearMonthDuration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_yearMonthDuration {
        inline app::Datatype_yearMonthDuration__Class** type_info() {
            static app::Datatype_yearMonthDuration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_yearMonthDuration__Class**)(modloader::win::memory::resolve_rva(0x04703B08));
            }
            return cache;
        }
        inline app::Datatype_yearMonthDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_yearMonthDuration__Class>(type_info(), "System.Xml.Schema", "Datatype_yearMonthDuration");
        }
        inline app::Datatype_yearMonthDuration* create() {
            return il2cpp::create_object<app::Datatype_yearMonthDuration>(get_class());
        }
    } // namespace Datatype_yearMonthDuration
} // namespace app::classes::types
