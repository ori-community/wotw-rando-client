#pragma once
#include <Modloader/app/structs/Datatype_date.h>
#include <Modloader/app/structs/Datatype_date__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_date {
        inline app::Datatype_date__Class** type_info() {
            static app::Datatype_date__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_date__Class**)(modloader::win::memory::resolve_rva(0x04738810));
            }
            return cache;
        }
        inline app::Datatype_date__Class* get_class() {
            return il2cpp::get_class<app::Datatype_date__Class>(type_info(), "System.Xml.Schema", "Datatype_date");
        }
        inline app::Datatype_date* create() {
            return il2cpp::create_object<app::Datatype_date>(get_class());
        }
    } // namespace Datatype_date
} // namespace app::classes::types
