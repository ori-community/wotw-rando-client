#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageWeight__Enum {
        inline app::DamageWeight__Enum__Class** type_info = (app::DamageWeight__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473B460));
        inline app::DamageWeight__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageWeight__Enum__Class>(type_info, "", "DamageWeight");
        }
        inline app::DamageWeight__Enum* create() {
            return il2cpp::create_object<app::DamageWeight__Enum>(get_class());
        }
        inline app::DamageWeight__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageWeight__Enum__Array>(get_class(), size);
        }
        inline app::DamageWeight__Enum__Array* create_array(const std::vector<app::DamageWeight__Enum*>& items) {
            return il2cpp::array_new<app::DamageWeight__Enum__Array>(get_class(), items);
        }
    } // namespace DamageWeight__Enum
} // namespace app::classes::types
