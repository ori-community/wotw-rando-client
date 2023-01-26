#pragma once
#include <Modloader/app/structs/LocalDataStoreSlot__Array.h>
#include <Modloader/app/structs/LocalDataStoreSlot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreSlot__Array {
        inline app::LocalDataStoreSlot__Array__Class** type_info() {
            static app::LocalDataStoreSlot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalDataStoreSlot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalDataStoreSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreSlot__Array__Class>(type_info(), "System", "LocalDataStoreSlot[]");
        }
        inline app::LocalDataStoreSlot__Array* create() {
            return il2cpp::create_object<app::LocalDataStoreSlot__Array>(get_class());
        }
    } // namespace LocalDataStoreSlot__Array
} // namespace app::classes::types
