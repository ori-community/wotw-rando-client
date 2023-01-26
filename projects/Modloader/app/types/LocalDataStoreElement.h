#pragma once
#include <Modloader/app/structs/LocalDataStoreElement.h>
#include <Modloader/app/structs/LocalDataStoreElement__Array.h>
#include <Modloader/app/structs/LocalDataStoreElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreElement {
        inline app::LocalDataStoreElement__Class** type_info() {
            static app::LocalDataStoreElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDataStoreElement__Class**)(modloader::win::memory::resolve_rva(0x047922B0));
            }
            return cache;
        }
        inline app::LocalDataStoreElement__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreElement__Class>(type_info(), "System", "LocalDataStoreElement");
        }
        inline app::LocalDataStoreElement* create() {
            return il2cpp::create_object<app::LocalDataStoreElement>(get_class());
        }
        inline app::LocalDataStoreElement__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDataStoreElement__Array>(get_class(), size);
        }
        inline app::LocalDataStoreElement__Array* create_array(const std::vector<app::LocalDataStoreElement*>& items) {
            return il2cpp::array_new<app::LocalDataStoreElement__Array>(get_class(), items);
        }
    } // namespace LocalDataStoreElement
} // namespace app::classes::types
