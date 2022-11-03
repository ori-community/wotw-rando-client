#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_anyAtomicType {
        inline app::Datatype_anyAtomicType__Class** type_info = (app::Datatype_anyAtomicType__Class**)(modloader::win::memory::resolve_rva(0x04793940));
        inline app::Datatype_anyAtomicType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anyAtomicType__Class>(type_info, "System.Xml.Schema", "Datatype_anyAtomicType");
        }
        inline app::Datatype_anyAtomicType* create() {
            return il2cpp::create_object<app::Datatype_anyAtomicType>(get_class());
        }
    } // namespace Datatype_anyAtomicType
} // namespace app::classes::types
