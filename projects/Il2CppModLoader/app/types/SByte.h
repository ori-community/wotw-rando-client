#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SByte__Class** type_info;
        inline app::SByte__Class* get_class() {
            return il2cpp::get_class<app::SByte__Class>(type_info, "System", "SByte");
        }
        inline app::SByte* create() {
            return il2cpp::create_object<app::SByte>(get_class());
        }
        inline app::SByte__Boxed* box(int8_t value) {
            return il2cpp::box_value<app::SByte__Boxed>(get_class(), value);
        }
        inline app::SByte__Array* create_array(int size) {
            return il2cpp::array_new<app::SByte__Array>(get_class(), size);
        }
    } // namespace SByte
} // namespace app::classes::types
