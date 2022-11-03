#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalDataStoreElement {
        inline app::LocalDataStoreElement__Class** type_info = (app::LocalDataStoreElement__Class**)(modloader::win::memory::resolve_rva(0x047922B0));
        inline app::LocalDataStoreElement__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreElement__Class>(type_info, "System", "LocalDataStoreElement");
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
