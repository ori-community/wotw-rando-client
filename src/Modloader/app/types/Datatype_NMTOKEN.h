#pragma once
#include <Modloader/app/structs/Datatype_NMTOKEN.h>
#include <Modloader/app/structs/Datatype_NMTOKEN__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_NMTOKEN {
        inline app::Datatype_NMTOKEN__Class** type_info() {
            static app::Datatype_NMTOKEN__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_NMTOKEN__Class**)(modloader::win::memory::resolve_rva(0x04727070));
            }
            return cache;
        }
        inline app::Datatype_NMTOKEN__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NMTOKEN__Class>(type_info(), "System.Xml.Schema", "Datatype_NMTOKEN");
        }
        inline app::Datatype_NMTOKEN* create() {
            return il2cpp::create_object<app::Datatype_NMTOKEN>(get_class());
        }
    } // namespace Datatype_NMTOKEN
} // namespace app::classes::types
