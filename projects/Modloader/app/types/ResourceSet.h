#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceSet {
        inline app::ResourceSet__Class** type_info = (app::ResourceSet__Class**)(modloader::win::memory::resolve_rva(0x047684C8));
        inline app::ResourceSet__Class* get_class() {
            return il2cpp::get_class<app::ResourceSet__Class>(type_info, "System.Resources", "ResourceSet");
        }
        inline app::ResourceSet* create() {
            return il2cpp::create_object<app::ResourceSet>(get_class());
        }
        inline app::ResourceSet__Array* create_array(int size) {
            return il2cpp::array_new<app::ResourceSet__Array>(get_class(), size);
        }
        inline app::ResourceSet__Array* create_array(const std::vector<app::ResourceSet*>& items) {
            return il2cpp::array_new<app::ResourceSet__Array>(get_class(), items);
        }
    } // namespace ResourceSet
} // namespace app::classes::types
