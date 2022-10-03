#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Byte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Byte__Class** type_info;
        inline app::Byte__Class* get_class() {
            return il2cpp::get_class<app::Byte__Class>(type_info, "System", "Byte");
        }
        inline app::Byte* create() {
            return il2cpp::create_object<app::Byte>(get_class());
        }
        inline app::Byte__Boxed* box(uint8_t value) {
            return il2cpp::box_value<app::Byte__Boxed>(get_class(), value);
        }
        inline app::Byte__Array* create_array(int size) {
            return il2cpp::array_new<app::Byte__Array>(get_class(), size);
        }
    } // namespace Byte
} // namespace app::classes::types
