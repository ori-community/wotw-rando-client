#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyDescriptorCollection {
        inline app::PropertyDescriptorCollection__Class** type_info = (app::PropertyDescriptorCollection__Class**)(modloader::win::memory::resolve_rva(0x04783D10));
        inline app::PropertyDescriptorCollection__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptorCollection__Class>(type_info, "System.ComponentModel", "PropertyDescriptorCollection");
        }
        inline app::PropertyDescriptorCollection* create() {
            return il2cpp::create_object<app::PropertyDescriptorCollection>(get_class());
        }
    } // namespace PropertyDescriptorCollection
} // namespace app::classes::types
