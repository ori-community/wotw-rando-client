#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollectionChangeEventHandler__Class.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>

namespace app::classes::types {
    namespace CollectionChangeEventHandler {
        inline app::CollectionChangeEventHandler__Class** type_info = (app::CollectionChangeEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04763338));
        inline app::CollectionChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CollectionChangeEventHandler__Class>(type_info, "System.ComponentModel", "CollectionChangeEventHandler");
        }
        inline app::CollectionChangeEventHandler* create() {
            return il2cpp::create_object<app::CollectionChangeEventHandler>(get_class());
        }
    } // namespace CollectionChangeEventHandler
} // namespace app::classes::types
