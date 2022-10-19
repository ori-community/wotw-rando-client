#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Attribute__Array {
        inline app::Attribute__Array__Class** type_info = (app::Attribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A240));
        inline app::Attribute__Array__Class* get_class() {
            return il2cpp::get_class<app::Attribute__Array__Class>(type_info, "System", "Attribute[]");
        }
        inline app::Attribute__Array* create() {
            return il2cpp::create_object<app::Attribute__Array>(get_class());
        }
        inline app::Attribute__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Attribute__Array__Array>(get_class(), size);
        }
        inline app::Attribute__Array__Array* create_array(const std::vector<app::Attribute__Array*>& items) {
            return il2cpp::array_new<app::Attribute__Array__Array>(get_class(), items);
        }
    } // namespace Attribute__Array
} // namespace app::classes::types
