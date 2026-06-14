#pragma once
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/CollectionChangeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectionChangeEventHandler {
        inline app::CollectionChangeEventHandler__Class** type_info() {
            static app::CollectionChangeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CollectionChangeEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04763338));
            }
            return cache;
        }
        inline app::CollectionChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CollectionChangeEventHandler__Class>(type_info(), "System.ComponentModel", "CollectionChangeEventHandler");
        }
        inline app::CollectionChangeEventHandler* create() {
            return il2cpp::create_object<app::CollectionChangeEventHandler>(get_class());
        }
    } // namespace CollectionChangeEventHandler
} // namespace app::classes::types
