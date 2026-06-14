#pragma once
#include <Modloader/app/structs/Datatype_ENUMERATION.h>
#include <Modloader/app/structs/Datatype_ENUMERATION__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_ENUMERATION {
        inline app::Datatype_ENUMERATION__Class** type_info() {
            static app::Datatype_ENUMERATION__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_ENUMERATION__Class**)(modloader::win::memory::resolve_rva(0x04711D18));
            }
            return cache;
        }
        inline app::Datatype_ENUMERATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ENUMERATION__Class>(type_info(), "System.Xml.Schema", "Datatype_ENUMERATION");
        }
        inline app::Datatype_ENUMERATION* create() {
            return il2cpp::create_object<app::Datatype_ENUMERATION>(get_class());
        }
    } // namespace Datatype_ENUMERATION
} // namespace app::classes::types
