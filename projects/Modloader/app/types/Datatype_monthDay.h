#pragma once
#include <Modloader/app/structs/Datatype_monthDay.h>
#include <Modloader/app/structs/Datatype_monthDay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_monthDay {
        inline app::Datatype_monthDay__Class** type_info() {
            static app::Datatype_monthDay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_monthDay__Class**)(modloader::win::memory::resolve_rva(0x04729240));
            }
            return cache;
        }
        inline app::Datatype_monthDay__Class* get_class() {
            return il2cpp::get_class<app::Datatype_monthDay__Class>(type_info(), "System.Xml.Schema", "Datatype_monthDay");
        }
        inline app::Datatype_monthDay* create() {
            return il2cpp::create_object<app::Datatype_monthDay>(get_class());
        }
    } // namespace Datatype_monthDay
} // namespace app::classes::types
