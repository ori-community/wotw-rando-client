#pragma once
#include <Modloader/app/structs/Datatype_ENTITY.h>
#include <Modloader/app/structs/Datatype_ENTITY__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_ENTITY {
        inline app::Datatype_ENTITY__Class** type_info() {
            static app::Datatype_ENTITY__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_ENTITY__Class**)(modloader::win::memory::resolve_rva(0x04759A60));
            }
            return cache;
        }
        inline app::Datatype_ENTITY__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ENTITY__Class>(type_info(), "System.Xml.Schema", "Datatype_ENTITY");
        }
        inline app::Datatype_ENTITY* create() {
            return il2cpp::create_object<app::Datatype_ENTITY>(get_class());
        }
    } // namespace Datatype_ENTITY
} // namespace app::classes::types
