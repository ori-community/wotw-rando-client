#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectHolderList__Class.h>
#include <Modloader/app/structs/ObjectHolderList.h>

namespace app::classes::types {
    namespace ObjectHolderList {
        inline app::ObjectHolderList__Class** type_info = (app::ObjectHolderList__Class**)(modloader::win::memory::resolve_rva(0x04721788));
        inline app::ObjectHolderList__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolderList__Class>(type_info, "System.Runtime.Serialization", "ObjectHolderList");
        }
        inline app::ObjectHolderList* create() {
            return il2cpp::create_object<app::ObjectHolderList>(get_class());
        }
    } // namespace ObjectHolderList
} // namespace app::classes::types
