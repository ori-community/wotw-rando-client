#pragma once
#include <Modloader/app/structs/Datatype_anyURI.h>
#include <Modloader/app/structs/Datatype_anyURI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_anyURI {
        inline app::Datatype_anyURI__Class** type_info() {
            static app::Datatype_anyURI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_anyURI__Class**)(modloader::win::memory::resolve_rva(0x04722098));
            }
            return cache;
        }
        inline app::Datatype_anyURI__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anyURI__Class>(type_info(), "System.Xml.Schema", "Datatype_anyURI");
        }
        inline app::Datatype_anyURI* create() {
            return il2cpp::create_object<app::Datatype_anyURI>(get_class());
        }
    } // namespace Datatype_anyURI
} // namespace app::classes::types
