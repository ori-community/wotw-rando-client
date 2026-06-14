#pragma once
#include <Modloader/app/structs/Datatype_IDREF.h>
#include <Modloader/app/structs/Datatype_IDREF__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_IDREF {
        inline app::Datatype_IDREF__Class** type_info() {
            static app::Datatype_IDREF__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_IDREF__Class**)(modloader::win::memory::resolve_rva(0x047435C8));
            }
            return cache;
        }
        inline app::Datatype_IDREF__Class* get_class() {
            return il2cpp::get_class<app::Datatype_IDREF__Class>(type_info(), "System.Xml.Schema", "Datatype_IDREF");
        }
        inline app::Datatype_IDREF* create() {
            return il2cpp::create_object<app::Datatype_IDREF>(get_class());
        }
    } // namespace Datatype_IDREF
} // namespace app::classes::types
