#pragma once
#include <Modloader/app/structs/Datatype_dateTimeNoTimeZone.h>
#include <Modloader/app/structs/Datatype_dateTimeNoTimeZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTimeNoTimeZone {
        inline app::Datatype_dateTimeNoTimeZone__Class** type_info() {
            static app::Datatype_dateTimeNoTimeZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_dateTimeNoTimeZone__Class**)(modloader::win::memory::resolve_rva(0x04706BB0));
            }
            return cache;
        }
        inline app::Datatype_dateTimeNoTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTimeNoTimeZone__Class>(type_info(), "System.Xml.Schema", "Datatype_dateTimeNoTimeZone");
        }
        inline app::Datatype_dateTimeNoTimeZone* create() {
            return il2cpp::create_object<app::Datatype_dateTimeNoTimeZone>(get_class());
        }
    } // namespace Datatype_dateTimeNoTimeZone
} // namespace app::classes::types
