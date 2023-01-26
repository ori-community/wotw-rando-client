#pragma once
#include <Modloader/app/structs/Datatype_dateTime.h>
#include <Modloader/app/structs/Datatype_dateTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_dateTime {
        inline app::Datatype_dateTime__Class** type_info() {
            static app::Datatype_dateTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_dateTime__Class**)(modloader::win::memory::resolve_rva(0x047892C8));
            }
            return cache;
        }
        inline app::Datatype_dateTime__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dateTime__Class>(type_info(), "System.Xml.Schema", "Datatype_dateTime");
        }
        inline app::Datatype_dateTime* create() {
            return il2cpp::create_object<app::Datatype_dateTime>(get_class());
        }
    } // namespace Datatype_dateTime
} // namespace app::classes::types
