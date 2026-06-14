#pragma once
#include <Modloader/app/structs/Datatype_negativeInteger.h>
#include <Modloader/app/structs/Datatype_negativeInteger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_negativeInteger {
        inline app::Datatype_negativeInteger__Class** type_info() {
            static app::Datatype_negativeInteger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_negativeInteger__Class**)(modloader::win::memory::resolve_rva(0x0474FF70));
            }
            return cache;
        }
        inline app::Datatype_negativeInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_negativeInteger__Class>(type_info(), "System.Xml.Schema", "Datatype_negativeInteger");
        }
        inline app::Datatype_negativeInteger* create() {
            return il2cpp::create_object<app::Datatype_negativeInteger>(get_class());
        }
    } // namespace Datatype_negativeInteger
} // namespace app::classes::types
