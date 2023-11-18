#pragma once
#include <Modloader/app/structs/Datatype_nonNegativeInteger.h>
#include <Modloader/app/structs/Datatype_nonNegativeInteger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_nonNegativeInteger {
        inline app::Datatype_nonNegativeInteger__Class** type_info() {
            static app::Datatype_nonNegativeInteger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_nonNegativeInteger__Class**)(modloader::win::memory::resolve_rva(0x04758DD0));
            }
            return cache;
        }
        inline app::Datatype_nonNegativeInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_nonNegativeInteger__Class>(type_info(), "System.Xml.Schema", "Datatype_nonNegativeInteger");
        }
        inline app::Datatype_nonNegativeInteger* create() {
            return il2cpp::create_object<app::Datatype_nonNegativeInteger>(get_class());
        }
    } // namespace Datatype_nonNegativeInteger
} // namespace app::classes::types
