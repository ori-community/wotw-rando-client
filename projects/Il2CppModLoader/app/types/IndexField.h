#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexField {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IndexField__Class** type_info;
        inline app::IndexField__Class* get_class() {
            return il2cpp::get_class<app::IndexField__Class>(type_info, "System.Data", "IndexField");
        }
        inline app::IndexField* create() {
            return il2cpp::create_object<app::IndexField>(get_class());
        }
        inline app::IndexField__Boxed* box(app::IndexField value) {
            return il2cpp::box_value<app::IndexField__Boxed>(get_class(), value);
        }
        inline app::IndexField__Array* create_array(int size) {
            return il2cpp::array_new<app::IndexField__Array>(get_class(), size);
        }
    } // namespace IndexField
} // namespace app::classes::types
