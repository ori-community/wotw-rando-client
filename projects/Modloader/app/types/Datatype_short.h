#pragma once
#include <Modloader/app/structs/Datatype_short.h>
#include <Modloader/app/structs/Datatype_short__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_short {
        inline app::Datatype_short__Class** type_info() {
            static app::Datatype_short__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_short__Class**)(modloader::win::memory::resolve_rva(0x04703690));
            }
            return cache;
        }
        inline app::Datatype_short__Class* get_class() {
            return il2cpp::get_class<app::Datatype_short__Class>(type_info(), "System.Xml.Schema", "Datatype_short");
        }
        inline app::Datatype_short* create() {
            return il2cpp::create_object<app::Datatype_short>(get_class());
        }
    } // namespace Datatype_short
} // namespace app::classes::types
