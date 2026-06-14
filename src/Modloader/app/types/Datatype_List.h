#pragma once
#include <Modloader/app/structs/Datatype_List.h>
#include <Modloader/app/structs/Datatype_List__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_List {
        inline app::Datatype_List__Class** type_info() {
            static app::Datatype_List__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_List__Class**)(modloader::win::memory::resolve_rva(0x0470D220));
            }
            return cache;
        }
        inline app::Datatype_List__Class* get_class() {
            return il2cpp::get_class<app::Datatype_List__Class>(type_info(), "System.Xml.Schema", "Datatype_List");
        }
        inline app::Datatype_List* create() {
            return il2cpp::create_object<app::Datatype_List>(get_class());
        }
    } // namespace Datatype_List
} // namespace app::classes::types
