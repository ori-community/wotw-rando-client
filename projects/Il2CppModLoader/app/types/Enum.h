#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Enum__Class** type_info;
        inline app::Enum__Class* get_class() {
            return il2cpp::get_class<app::Enum__Class>(type_info, "System", "Enum");
        }
        inline app::Enum* create() {
            return il2cpp::create_object<app::Enum>(get_class());
        }
        inline app::Enum__Boxed* box(app::Enum value) {
            return il2cpp::box_value<app::Enum__Boxed>(get_class(), value);
        }
        inline app::Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Enum__Array>(get_class(), size);
        }
        inline app::Enum__Array* create_array(const std::vector<app::Enum__Boxed>& items) {
            return il2cpp::array_new<app::Enum__Array>(get_class(), items);
        }
    } // namespace Enum
} // namespace app::classes::types
