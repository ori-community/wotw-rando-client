#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_anySimpleType__Class.h>
#include <Modloader/app/structs/Datatype_anySimpleType.h>

namespace app::classes::types {
    namespace Datatype_anySimpleType {
        inline app::Datatype_anySimpleType__Class** type_info = (app::Datatype_anySimpleType__Class**)(modloader::win::memory::resolve_rva(0x0477F5D8));
        inline app::Datatype_anySimpleType__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anySimpleType__Class>(type_info, "System.Xml.Schema", "Datatype_anySimpleType");
        }
        inline app::Datatype_anySimpleType* create() {
            return il2cpp::create_object<app::Datatype_anySimpleType>(get_class());
        }
    } // namespace Datatype_anySimpleType
} // namespace app::classes::types
