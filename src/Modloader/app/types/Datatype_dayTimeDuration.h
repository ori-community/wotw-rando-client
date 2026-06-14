#pragma once
#include <Modloader/app/structs/Datatype_dayTimeDuration.h>
#include <Modloader/app/structs/Datatype_dayTimeDuration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_dayTimeDuration {
        inline app::Datatype_dayTimeDuration__Class** type_info() {
            static app::Datatype_dayTimeDuration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_dayTimeDuration__Class**)(modloader::win::memory::resolve_rva(0x0470F140));
            }
            return cache;
        }
        inline app::Datatype_dayTimeDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dayTimeDuration__Class>(type_info(), "System.Xml.Schema", "Datatype_dayTimeDuration");
        }
        inline app::Datatype_dayTimeDuration* create() {
            return il2cpp::create_object<app::Datatype_dayTimeDuration>(get_class());
        }
    } // namespace Datatype_dayTimeDuration
} // namespace app::classes::types
