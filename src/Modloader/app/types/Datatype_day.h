#pragma once
#include <Modloader/app/structs/Datatype_day.h>
#include <Modloader/app/structs/Datatype_day__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_day {
        inline app::Datatype_day__Class** type_info() {
            static app::Datatype_day__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_day__Class**)(modloader::win::memory::resolve_rva(0x04703D18));
            }
            return cache;
        }
        inline app::Datatype_day__Class* get_class() {
            return il2cpp::get_class<app::Datatype_day__Class>(type_info(), "System.Xml.Schema", "Datatype_day");
        }
        inline app::Datatype_day* create() {
            return il2cpp::create_object<app::Datatype_day>(get_class());
        }
    } // namespace Datatype_day
} // namespace app::classes::types
