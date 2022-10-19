#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeCollection {
        inline app::AttributeCollection__Class** type_info = (app::AttributeCollection__Class**)(modloader::win::memory::resolve_rva(0x0478BF90));
        inline app::AttributeCollection__Class* get_class() {
            return il2cpp::get_class<app::AttributeCollection__Class>(type_info, "System.ComponentModel", "AttributeCollection");
        }
        inline app::AttributeCollection* create() {
            return il2cpp::create_object<app::AttributeCollection>(get_class());
        }
    } // namespace AttributeCollection
} // namespace app::classes::types
