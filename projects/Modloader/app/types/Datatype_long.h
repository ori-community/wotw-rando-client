#pragma once
#include <Modloader/app/structs/Datatype_long.h>
#include <Modloader/app/structs/Datatype_long__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_long {
        inline app::Datatype_long__Class** type_info() {
            static app::Datatype_long__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_long__Class**)(modloader::win::memory::resolve_rva(0x0471E498));
            }
            return cache;
        }
        inline app::Datatype_long__Class* get_class() {
            return il2cpp::get_class<app::Datatype_long__Class>(type_info(), "System.Xml.Schema", "Datatype_long");
        }
        inline app::Datatype_long* create() {
            return il2cpp::create_object<app::Datatype_long>(get_class());
        }
    } // namespace Datatype_long
} // namespace app::classes::types
