#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Decimal__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Decimal__Array__Class** type_info;
        inline app::Decimal__Array__Class* get_class() {
            return il2cpp::get_class<app::Decimal__Array__Class>(type_info, "System", "Decimal[]");
        }
        inline app::Decimal__Array* create() {
            return il2cpp::create_object<app::Decimal__Array>(get_class());
        }
    } // namespace Decimal__Array
} // namespace app::classes::types
