#pragma once
#include <Modloader/app/structs/Datatype_timeNoTimeZone.h>
#include <Modloader/app/structs/Datatype_timeNoTimeZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_timeNoTimeZone {
        inline app::Datatype_timeNoTimeZone__Class** type_info() {
            static app::Datatype_timeNoTimeZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_timeNoTimeZone__Class**)(modloader::win::memory::resolve_rva(0x047441B8));
            }
            return cache;
        }
        inline app::Datatype_timeNoTimeZone__Class* get_class() {
            return il2cpp::get_class<app::Datatype_timeNoTimeZone__Class>(type_info(), "System.Xml.Schema", "Datatype_timeNoTimeZone");
        }
        inline app::Datatype_timeNoTimeZone* create() {
            return il2cpp::create_object<app::Datatype_timeNoTimeZone>(get_class());
        }
    } // namespace Datatype_timeNoTimeZone
} // namespace app::classes::types
