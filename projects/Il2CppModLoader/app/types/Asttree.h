#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Asttree {
        inline app::Asttree__Class** type_info = (app::Asttree__Class**)(modloader::win::memory::resolve_rva(0x04743A78));
        inline app::Asttree__Class* get_class() {
            return il2cpp::get_class<app::Asttree__Class>(type_info, "System.Xml.Schema", "Asttree");
        }
        inline app::Asttree* create() {
            return il2cpp::create_object<app::Asttree>(get_class());
        }
        inline app::Asttree__Array* create_array(int size) {
            return il2cpp::array_new<app::Asttree__Array>(get_class(), size);
        }
        inline app::Asttree__Array* create_array(const std::vector<app::Asttree*>& items) {
            return il2cpp::array_new<app::Asttree__Array>(get_class(), items);
        }
    } // namespace Asttree
} // namespace app::classes::types
