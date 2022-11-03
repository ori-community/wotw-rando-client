#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_negativeInteger {
        inline app::Datatype_negativeInteger__Class** type_info = (app::Datatype_negativeInteger__Class**)(modloader::win::memory::resolve_rva(0x0474FF70));
        inline app::Datatype_negativeInteger__Class* get_class() {
            return il2cpp::get_class<app::Datatype_negativeInteger__Class>(type_info, "System.Xml.Schema", "Datatype_negativeInteger");
        }
        inline app::Datatype_negativeInteger* create() {
            return il2cpp::create_object<app::Datatype_negativeInteger>(get_class());
        }
    } // namespace Datatype_negativeInteger
} // namespace app::classes::types
