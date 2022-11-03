#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_List {
        inline app::Datatype_List__Class** type_info = (app::Datatype_List__Class**)(modloader::win::memory::resolve_rva(0x0470D220));
        inline app::Datatype_List__Class* get_class() {
            return il2cpp::get_class<app::Datatype_List__Class>(type_info, "System.Xml.Schema", "Datatype_List");
        }
        inline app::Datatype_List* create() {
            return il2cpp::create_object<app::Datatype_List>(get_class());
        }
    } // namespace Datatype_List
} // namespace app::classes::types
