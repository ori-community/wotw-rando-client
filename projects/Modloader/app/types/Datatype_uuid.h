#pragma once
#include <Modloader/app/structs/Datatype_uuid.h>
#include <Modloader/app/structs/Datatype_uuid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_uuid {
        inline app::Datatype_uuid__Class** type_info() {
            static app::Datatype_uuid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_uuid__Class**)(modloader::win::memory::resolve_rva(0x04738420));
            }
            return cache;
        }
        inline app::Datatype_uuid__Class* get_class() {
            return il2cpp::get_class<app::Datatype_uuid__Class>(type_info(), "System.Xml.Schema", "Datatype_uuid");
        }
        inline app::Datatype_uuid* create() {
            return il2cpp::create_object<app::Datatype_uuid>(get_class());
        }
    } // namespace Datatype_uuid
} // namespace app::classes::types
