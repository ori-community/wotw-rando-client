#pragma once
#include <Modloader/app/structs/LocalDataStoreElement__Array.h>
#include <Modloader/app/structs/LocalDataStoreElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreElement__Array {
        inline app::LocalDataStoreElement__Array__Class** type_info() {
            static app::LocalDataStoreElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDataStoreElement__Array__Class**)(modloader::win::memory::resolve_rva(0x04775DA8));
            }
            return cache;
        }
        inline app::LocalDataStoreElement__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreElement__Array__Class>(type_info(), "System", "LocalDataStoreElement[]");
        }
        inline app::LocalDataStoreElement__Array* create() {
            return il2cpp::create_object<app::LocalDataStoreElement__Array>(get_class());
        }
    } // namespace LocalDataStoreElement__Array
} // namespace app::classes::types
