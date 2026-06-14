#pragma once
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/LocalDataStoreSlot__Array.h>
#include <Modloader/app/structs/LocalDataStoreSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreSlot {
        inline app::LocalDataStoreSlot__Class** type_info() {
            static app::LocalDataStoreSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDataStoreSlot__Class**)(modloader::win::memory::resolve_rva(0x0473B600));
            }
            return cache;
        }
        inline app::LocalDataStoreSlot__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreSlot__Class>(type_info(), "System", "LocalDataStoreSlot");
        }
        inline app::LocalDataStoreSlot* create() {
            return il2cpp::create_object<app::LocalDataStoreSlot>(get_class());
        }
        inline app::LocalDataStoreSlot__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDataStoreSlot__Array>(get_class(), size);
        }
        inline app::LocalDataStoreSlot__Array* create_array(const std::vector<app::LocalDataStoreSlot*>& items) {
            return il2cpp::array_new<app::LocalDataStoreSlot__Array>(get_class(), items);
        }
    } // namespace LocalDataStoreSlot
} // namespace app::classes::types
