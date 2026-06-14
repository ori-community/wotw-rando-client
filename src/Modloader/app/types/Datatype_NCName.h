#pragma once
#include <Modloader/app/structs/Datatype_NCName.h>
#include <Modloader/app/structs/Datatype_NCName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_NCName {
        inline app::Datatype_NCName__Class** type_info() {
            static app::Datatype_NCName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_NCName__Class**)(modloader::win::memory::resolve_rva(0x04769770));
            }
            return cache;
        }
        inline app::Datatype_NCName__Class* get_class() {
            return il2cpp::get_class<app::Datatype_NCName__Class>(type_info(), "System.Xml.Schema", "Datatype_NCName");
        }
        inline app::Datatype_NCName* create() {
            return il2cpp::create_object<app::Datatype_NCName>(get_class());
        }
    } // namespace Datatype_NCName
} // namespace app::classes::types
