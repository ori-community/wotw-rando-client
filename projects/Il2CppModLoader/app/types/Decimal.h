#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Decimal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Decimal__Class** type_info;
        inline app::Decimal__Class* get_class() {
            return il2cpp::get_class<app::Decimal__Class>(type_info, "System", "Decimal");
        }
        inline app::Decimal* create() {
            return il2cpp::create_object<app::Decimal>(get_class());
        }
        inline app::Decimal__Boxed* box(app::Decimal value) {
            return il2cpp::box_value<app::Decimal__Boxed>(get_class(), value);
        }
        inline app::Decimal__Array* create_array(int size) {
            return il2cpp::array_new<app::Decimal__Array>(get_class(), size);
        }
        inline app::Decimal__Array* create_array(const std::vector<app::Decimal>& items) {
            return il2cpp::array_new<app::Decimal__Array>(get_class(), items);
        }
    } // namespace Decimal
} // namespace app::classes::types
